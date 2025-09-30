/**
 * Project 数据备份软件
 */


#ifndef _RESTORETASK_H
#define _RESTORETASK_H

class RestoreTask {
public: 
    
/**
 * @param packer
 * @param compressor
 * @param encryptor
 * @param storage
 */
void RestoreTask(unique_ptr<IPacker> packer, unique_ptr<ICompressor> compressor, unique_ptr<IEncryptor> encryptor, unique_ptr<IRemoteStorage> storage);
    
/**
 * @param remoteName
 * @param dstDir
 */
void DoRestore(string & remoteName, string & dstDir);
private: 
    unique_ptr<IPacker> packer;
    unique_ptr<IEncryptor> encryptor;
    unique_ptr<ICompressor> compressor;
    unique_ptr<IRemoteStorage> storage;
};

#endif //_RESTORETASK_H