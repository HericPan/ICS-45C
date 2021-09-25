#include "HashMap.hpp"
#include <iostream>

using HashFunction = std::function<unsigned int(const std::string&)>;

namespace
{
    const std::hash<std::string> defaultHashFunction = std::hash<std::string>{};

}

// default constructor
HashMap::HashMap() 
    : hashFunction(defaultHashFunction), buckets(nullptr), totalNodesCount(0), totalBucketsCount(HashMap::INITIAL_BUCKET_COUNT) // we use the default hash function from STL
{
    // start RAII, allocating buckets
    try
    {
        // dynamically allocate 10(default) buckets, each contains a Node's head pointer
        buckets = new Node*[totalBucketsCount]; 
        
        // nullptr for each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = nullptr; // Allocate for heads
        }

        // Allocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = new Node{"", "", nullptr}; // Allocate for heads
        }
    } catch (...) // if allocation throws exception
    {
        // Deallocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            delete this->buckets[i];
        }
        delete[] buckets; // deallocate all in the buckets
        throw;
    }
    // end of RAII
}

// second constructor
HashMap::HashMap(HashFunction hashfunction)
    : hashFunction(hashfunction),buckets(nullptr), totalNodesCount(0), totalBucketsCount(HashMap::INITIAL_BUCKET_COUNT)
{
    // start RAII, allocating buckets
    try
    {
        // dynamically allocate 10(default) buckets, each contains a Node's head pointer
        buckets = new Node*[totalBucketsCount]; 
        
        // nullptr for each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = nullptr; // Allocate for heads
        }

        // Allocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = new Node{"", "", nullptr}; // Allocate for heads
        }
    } catch (...) // if allocation throws exception
    {
        // Deallocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            delete this->buckets[i];
        }
        delete[] buckets; // deallocate all in the buckets
        throw;
    }
    // end of RAII
}

// copy constructor 
HashMap::HashMap(const HashMap& hm)
    : hashFunction(hm.hashFunction), buckets(nullptr), totalNodesCount(hm.totalNodesCount), totalBucketsCount(hm.totalBucketsCount) 
{
    // start RAII, allocating buckets
    try
    {
        // dynamically allocate 10(default) buckets, each contains a Node's head pointer
        buckets = new Node*[totalBucketsCount]; 
        
        // nullptr for each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = nullptr; // Allocate for heads
        }

        // Allocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            buckets[i] = new Node{"", "", nullptr}; // Allocate for heads
        }
    } catch (...) // if allocation throws exception
    {
        // Deallocation for the head in each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            delete this->buckets[i];
        }
        delete[] buckets; // deallocate all in the buckets
        throw;
    }
    // end of RAII

    // Since we are unable to access Node struct outside the class
    // Also, we are unable to add public functions
    // We could only write inner loop

    // iterate through all indexes of the bucket then copy each linked list to the current object
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {

        Node* nodeTracker = hm.buckets[i]; // the current linked list's head (pointer)

        // iterate through all of the node the linked list in this index
        // then add them into our HashMap
        while (nodeTracker != nullptr)
        {
            std::string key = nodeTracker->key;
            std::string value = nodeTracker->value;
            this->add(key, value);
            nodeTracker = nodeTracker->next;
        }
        
    }
    
}

// destructor
HashMap::~HashMap()
{
    // we should first delete all of the Nodes in the linked lists of each bucket
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {
        // get the head of the current linked list in the buckets[i]
        Node* nodeTracker = this->buckets[i];
        
        // iterate through all of the nodes then deallocate them
        while (nodeTracker != nullptr)
        {
            // we save the current Node's next Node
            Node *tempTracker = nodeTracker->next;

            // then deallocate the current Node
            delete nodeTracker; 

            // make the node Tracker equals to the next Node from the tempTracker
            nodeTracker = tempTracker;
        }
        
    }


    delete[] buckets;
}


// assignment overload function
HashMap& HashMap::operator=(const HashMap& hm)
{
    if (this != &hm) {

        // we are required to deaollocate all of the stuffs in buckets with all of its linked lists
        // DEALLOCATION COPY: from destructor
         // we should first delete all of the Nodes in the linked lists of each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            // get the head of the current linked list in the buckets[i]
            Node* nodeTracker = this->buckets[i];
            
            // iterate through all of the nodes then deallocate them
            while (nodeTracker != nullptr)
            {
                // we save the current Node's next Node
                Node *tempTracker = nodeTracker->next;

                // then deallocate the current Node
                delete nodeTracker; 

                // make the node Tracker equals to the next Node from the tempTracker
                nodeTracker = tempTracker;
            }
            
        }
        delete[] buckets;
        // end of DEALLOCATION COPY

        // initialization for copying
        this->buckets = nullptr;
        this->totalNodesCount = hm.totalNodesCount;
        this->totalBucketsCount = hm.totalBucketsCount;
        this->hashFunction = hm.hashFunction;

        // start RAII, allocating buckets
        try
        {
            // dynamically allocate 10(default) buckets, each contains a Node's head pointer
            buckets = new Node*[totalBucketsCount]; 
            
            // nullptr for each bucket
            for (std::size_t i = 0; i < totalBucketsCount; i++)
            {
                buckets[i] = nullptr; // Allocate for heads
            }

            // Allocation for the head in each bucket
            for (std::size_t i = 0; i < totalBucketsCount; i++)
            {
                buckets[i] = new Node{"", "", nullptr}; // Allocate for heads
            }
        } catch (...) // if allocation throws exception
        {
            // Deallocation for the head in each bucket
            for (std::size_t i = 0; i < totalBucketsCount; i++)
            {
                delete this->buckets[i];
            }
            delete[] buckets; // deallocate all in the buckets
            throw;
        }
        // end of RAII

        // copy bucket items from hm
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {

            Node* nodeTracker = hm.buckets[i]; // the current linked list's head (pointer)

            // iterate through all of the node the linked list in this index
            // then add them into our HashMap
            while (nodeTracker != nullptr)
            {
                std::string key = nodeTracker->key;
                std::string value = nodeTracker->value;
                this->add(key, value);
                nodeTracker = nodeTracker->next;
            }
        }
    }
    return *this;
}


void HashMap::add(const std::string& key, const std::string& value)
{
    // First, we need to know whether the HashMap already have the key
    if (this->contains(key))
    {
        return; // if already have the key, directly return.
    }

    // Second, we should determine whether the loadfactor > 0.8
    // but note, we should 
    if (((double)totalNodesCount+1)/(double)totalBucketsCount > 0.8 )
    {
        // So, the loadfactor reaches the limit of 0.8

        // 1. we can create a new buckets of doubled capacity
        Node* *newBuckets;
        unsigned int doubledBucketCount = 2*totalBucketsCount;

        // start RAII, allocating newBuckets
        try
        {
            newBuckets = new Node*[doubledBucketCount]; // dynamically allocate buckets of doubled capacity
            // nullptr for each bucket
            for (std::size_t i = 0; i < doubledBucketCount; i++)
            {
                newBuckets[i] = nullptr; // Allocate for heads
            }

            // Allocation for the head in each bucket
            for (std::size_t i = 0; i < doubledBucketCount; i++)
            {
                newBuckets[i] = new Node{"", "", nullptr}; // Allocate for heads
            }
        } catch (...) // if allocation throws exception
        {
            // Deallocation for the head in each bucket
            for (std::size_t i = 0; i < doubledBucketCount; i++)
            {
                delete newBuckets[i];
            }
            delete[] newBuckets; // deallocate all in the buckets
            throw;
        }
        // end of RAII

        
        // 2. we add each node from current buckets to that new buckets
        // first iterate through the old buckets 
        for (std::size_t i = 0; i < totalBucketsCount; i++) // for each buckets
        {
            // get the head of the current linked list in the buckets[i]
            Node* nodeTracker = this->buckets[i];
            // iterate through all of the nodes then access their key/value pair
            while (nodeTracker != nullptr)
            {
                // get the current key/value pair
                std::string newKey = nodeTracker->key;
                std::string newValue = nodeTracker->value;
                // let nodeTracker Get to current node's Next
                nodeTracker = nodeTracker->next;
                // IMPORTANT STEP: find the index and place inside newBuckets to store
                // a. get the hashvalue of the key
                std::size_t hashValue = this->hashFunction(key);
                // b. get the hashIndex of the newBuckets, given by doubledBucketsCount
                std::size_t hashIndex = hashValue % doubledBucketCount;

                
                // c. iterate through the linked list on that hashIndex, append the key/value pair
                Node* newNodeTracker = newBuckets[hashIndex];
                while (newNodeTracker->next != nullptr)
                {
                    newNodeTracker = newNodeTracker->next;
                }
                // d. finally add new Node to the newBuckets
                newNodeTracker->next = new Node{newKey, newValue, nullptr};
            }
        }

        // 3. then deallocate the all of the heap memories in the old buckets
        // we are required to deaollocate all of the stuffs in buckets with all of its linked lists
        // DEALLOCATION COPY: from destructor
         // we should first delete all of the Nodes in the linked lists of each bucket
        for (std::size_t i = 0; i < totalBucketsCount; i++)
        {
            // get the head of the current linked list in the buckets[i]
            Node* nodeTracker = this->buckets[i];
            
            // iterate through all of the nodes then deallocate them
            while (nodeTracker != nullptr)
            {
                // we save the current Node's next Node
                Node *tempTracker = nodeTracker->next;

                // then deallocate the current Node
                delete nodeTracker; 

                // make the node Tracker equals to the next Node from the tempTracker
                nodeTracker = tempTracker;
            }
            
        }
        delete[] buckets;
        // end of DEALLOCATION COPY

        // 4. make the this->buckets points to that new buckets 
        this->buckets = newBuckets;
        // 5. double the totalBucketsCount
        this->totalBucketsCount = doubledBucketCount;
    }

    // Get the hash value from object's hash function
    std::size_t hashValue = this->hashFunction(key);
    
    // conform the hash value to the buckets indices
    std::size_t hashIndex = hashValue % totalBucketsCount;

    // get the linked list's head on buckets of given hashIndex
    Node* nodeTracker = this->buckets[hashIndex];

    // iterate through the node at the end
    while (nodeTracker->next != nullptr)
    {
        nodeTracker = nodeTracker->next;
    }
    // then append the new key/value pair to this last node's next
    nodeTracker->next = new Node{key, value, nullptr};

    // the totalNodesCount increments by one
    this->totalNodesCount += 1;
}


bool HashMap::remove(const std::string& key){
    
    // First, check whether the key has already been stored in the HashMap, if not, return false
    if (!this->contains(key))
    {
        return false; // nothing was removed
    }

    this->totalNodesCount -= 1;
    // Then find the key to remove
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {
        // get the head of the current linked list in the buckets[i]
        Node* nodeTracker = this->buckets[i];
        
        // iterate through all of the nodes then check them
        while (nodeTracker->next != nullptr)
        {
            if (nodeTracker->next->key == key) { // if we find that key in the next Node's key
                // save the next node for deallcation later 
                Node* temp = nodeTracker->next;
                // make this node's next point to the next,next node
                nodeTracker->next = nodeTracker->next->next;
                // deallocate that saved "next" node
                delete temp;
                // return true
                return true;
                
                
            } else { // if we did not find that key
                nodeTracker = nodeTracker->next; // continue searching
            }
        }
            
    }

    std::cout << "Remove Got here! NOPE!!" << std::endl;
    return false; // this is a impossible step, but write throw instead;
        
}


bool HashMap::contains(const std::string& key) const
{
    // iterate through each bucket
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {
        // get the current linked list
        Node *nodeTracker = this->buckets[i];
        
        // iterate through the current linked list 
        while (nodeTracker != nullptr)
        {
            
            if (nodeTracker->key == key) // if we find that key in the bucket
            {
                // return true;
                return true;
            }
            nodeTracker = nodeTracker->next;
        }
    }

    return false;
}

std::string HashMap::value(const std::string& key) const
{
    // First, check whether the key has already been stored in the HashMap, if not, return false
    if (!this->contains(key))
    {
        return ""; // if no key was found, return empty string
    }

    // then, search for the key and its value
    // iterate through each bucket
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {
        // get the current linked list
        Node *nodeTracker = this->buckets[i];
        
        // iterate through the current linked list 
        while (nodeTracker != nullptr)
        {
            
            if (nodeTracker->key == key) // if we find that key in the bucket
            {
                // return the value of the matching node.
                return nodeTracker->value;
            }
            nodeTracker = nodeTracker->next;
        }
    }


    // throw "Your contains member function definitely have some problems.";
    std::cout << "value Got here! NOPE!!" << std::endl;

    return ""; // this is a impossible step, but write throw instead;
}

unsigned int HashMap::size() const
{
    return this->totalNodesCount;
}

unsigned int HashMap::bucketCount() const
{
    return this->totalBucketsCount;
}

double HashMap::loadFactor() const
{
    return (double)this->size() / (double)this->bucketCount();
}

unsigned int HashMap::maxBucketSize() const
{
    unsigned int maxCounter = 0;
    
    // still, we should iterate through the buckets
    // iterate through each bucket
    for (std::size_t i = 0; i < totalBucketsCount; i++)
    {
        // we need to have nodeCounter for each bucket
        unsigned int nodeCounter = 0;

        // get the current linked list
        Node *nodeTracker = this->buckets[i];
        
        // iterate through the current linked list 
        while (nodeTracker != nullptr)
        {
            
            nodeCounter++; // we increment the nodeCounter by one
            nodeTracker = nodeTracker->next;
        }

        // compare the nodeCounter to the maxCounter
        // store the larger one
        maxCounter = (maxCounter > nodeCounter) ? maxCounter : nodeCounter;
    }

    return maxCounter;
}