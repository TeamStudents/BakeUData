/**
 * Project 数据备份软件
 */


#include "BakeUpTask.h"

/**
 * BakeUpTask implementation
 * 
 * 组装正向流水线（打包→压缩→加密→上传）。
 */


/**
 * @param remoteName
 * @param filterEngine
 * @param packer
 * @param compressor
 * @param encryptor
 * @param storage
 */
void BakeUpTask::BaekUpTask(string remoteName, FilterEngine & filterEngine, unique_ptr<IPacker> packer, unique_ptr<ICompressor> compressor, unique_ptr<IEncryptor> encryptor, unique_ptr<IRemoteStorage> storage) {

}

/**
 * @param srcDir
 */
void BakeUpTask::void DoBakeUp(string & srcDir) {

}