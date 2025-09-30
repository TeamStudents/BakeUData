/**
 * Project 数据备份软件
 */


#ifndef _IREMOTESTORAGE_H
#define _IREMOTESTORAGE_H

class IRemoteStorage {
public: 
    
/**
 * @param localFIle
 * @param remotePath
 */
void Upload(string localFIle, string remotePath);
    
/**
 * @param remotePath
 * @param localFIle
 */
void Download(string remotePath, string localFIle);
    
/**
 * @param remotePath
 */
void Remove(string remotePath);
    
/**
 * @param remotePath
 */
vector<string> GetList(string remotePath);
};

#endif //_IREMOTESTORAGE_H