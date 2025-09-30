/**
 * Project 数据备份软件
 */


#ifndef _DRIVER_H
#define _DRIVER_H

class Driver {
public: 
    
/**
 * @param srcDir
 * @param remoteName
 * @param packAlgo
 * @param compressAlgo
 * @param encryptAlgo
 */
void BakeUp(string & srcDir, string & remoteName, string & packAlgo, string & compressAlgo, string & encryptAlgo);
    
/**
 * @param remoteName
 * @param dstDir
 */
void Restore(string remoteName, string dstDir);
    
void GetList();
    
/**
 * @param remoteName
 */
void Remove(string remoteName);
};

#endif //_DRIVER_H