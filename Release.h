/* 
 * Filename: Release.h
 * Description: Header file for the Release class
 * 
 * Version History:
 * 1.0 2024-07-02 - Initial version
 */

#pragma once
#include <string>

class Release {
public:
    // Constructors
    Release();
    Release(int releaseID, const std::string& version, const std::string& releaseDate);

    // Getters
    int getReleaseID() const;
    std::string getVersion() const;
    std::string getReleaseDate() const;

    // Setters (if needed)
    void setReleaseID(int releaseID);
    void setVersion(const std::string& version);
    void setReleaseDate(const std::string& releaseDate);

private:
    int releaseID;
    std::string version;
    std::string releaseDate;
};
