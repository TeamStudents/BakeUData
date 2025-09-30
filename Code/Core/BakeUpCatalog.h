/**
 * Project 数据备份软件
 */


#ifndef _BAKEUPCATALOG_H
#define _BAKEUPCATALOG_H

class BakeUpCatalog {
public: 
    unique_ptr<IRemoteStorage> storage;
    vector<json> cache;
    
/**
 * @param  remoteStorage
 */
void BackupCatalog(unique_ptr<IRemoteStorage>  remoteStorage);
    
void Refresh();
    
/**
 * @param remoteName
 */
void Remove(string & remoteName);
    
vector<json> GetList();
};

#endif //_BAKEUPCATALOG_H