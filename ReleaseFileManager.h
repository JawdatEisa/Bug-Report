/* 
 * Filename: ReleaseFileManager.h
 * Description: Header file for the Product class
 * 
 * Version History:
 * 1.0 2024-07-02 - Initial version
 */


#include <fstream>
#include <string>
#include "Release.h"

class ReleaseFileManager {
public:
    // Constructor and Destructor
    ReleaseFileManager(const std::string& filename);
    ~ReleaseFileManager();

    // Open file for reading and writing
    bool openFile();

    // Write a Release object to the file
    bool writeRelease(const Release& release);

    // Seek to the beginning of the file
    void seekToBeginning();

    // Read the next Release object from the file
    bool getNext(Release& releaseObj);

    // Close the file
    void closeFile();

    // Optionally delete a record by release ID
    bool deleteReleaseRecord(int releaseID);

    // Optionally find a record by release ID
    bool findReleaseRecord(int releaseID, Release& foundRelease);

private:
    std::string filename;
    std::fstream file;
};
