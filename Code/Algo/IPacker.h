/**
 * Project 数据备份软件
 */


#ifndef _IPACKER_H
#define _IPACKER_H

class IPacker {
public: 
    
/**
 * @param srcDir
 * @param engine
 */
void Pack(string srcDir, FilterEngine engine);
    
/**
 * @param inData
 * @param dstDir
 */
void UnPack(istream & inData, string dstDir);
};

#endif //_IPACKER_H