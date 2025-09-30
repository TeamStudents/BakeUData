/**
 * Project 数据备份软件
 */


#include "BakeUpCatalog.h"

/**
 * BakeUpCatalog implementation
 * 
 * 远端备份包列表缓存与删除
 */


/**
 * @param  remoteStorage
 */
void BakeUpCatalog::BackupCatalog(unique_ptr<IRemoteStorage>  remoteStorage) {

}

void BakeUpCatalog::Refresh() {

}

/**
 * @param remoteName
 */
void BakeUpCatalog::Remove(string & remoteName) {

}

/**
 * @return vector<json>
 */
vector<json> BakeUpCatalog::GetList() {
    return null;
}