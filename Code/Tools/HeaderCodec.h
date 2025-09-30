/**
 * Project 数据备份软件
 */


#ifndef _HEADERCODEC_H
#define _HEADERCODEC_H

class HeaderCodec {
public: 
    
/**
 * @param headerBlock
 * @param key
 */
string Serialize(HeaderBlock headerBlock, string key);
    
/**
 * @param blob
 * @param key
 */
HeaderBlock Deserialize(string blob, string key);
};

#endif //_HEADERCODEC_H