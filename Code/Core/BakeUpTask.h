/**
 * Project 数据备份软件
 */


#ifndef _BAKEUPTASK_H
#define _BAKEUPTASK_H

class BakeUpTask {
public: 
    FilterEngine & filterEngine;
    
/**
 * @param remoteName
 * @param filterEngine
 * @param packer
 * @param compressor
 * @param encryptor
 * @param storage
 */
void BaekUpTask(string remoteName, FilterEngine & filterEngine, unique_ptr<IPacker> packer, unique_ptr<ICompressor> compressor, unique_ptr<IEncryptor> encryptor, unique_ptr<IRemoteStorage> storage);
    
/**
 * @param srcDir
 */
void void DoBakeUp(string & srcDir);
private: 
    unique_ptr<IPacker> packer;
    unique_ptr<ICompressor> compressor;
    unique_ptr<IEncryptor> encryptor;
    unique_ptr<IRemoteStorage> storage;
    string remoteName;
};

#endif //_BAKEUPTASK_H