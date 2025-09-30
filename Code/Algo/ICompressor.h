/**
 * Project 数据备份软件
 */


#ifndef _ICOMPRESSOR_H
#define _ICOMPRESSOR_H

class ICompressor {
public: 
    
/**
 * @param inData
 */
void Compress(istream & inData);
    
/**
 * @param inData
 */
void Decompress(istream & inData);
};

#endif //_ICOMPRESSOR_H