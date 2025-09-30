/**
 * Project 数据备份软件
 */


#include "RestoreTask.h"

/**
 * RestoreTask implementation
 * 
 * 组装反向流水线（下载→解密→解压→解包）。
 */


/**
 * @param packer
 * @param compressor
 * @param encryptor
 * @param storage
 */
void RestoreTask::RestoreTask(unique_ptr<IPacker> packer, unique_ptr<ICompressor> compressor, unique_ptr<IEncryptor> encryptor, unique_ptr<IRemoteStorage> storage) {

}

/**
 * @param remoteName
 * @param dstDir
 */
void RestoreTask::DoRestore(string & remoteName, string & dstDir) {

}