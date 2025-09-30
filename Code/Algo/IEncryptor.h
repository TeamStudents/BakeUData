/**
 * Project 数据备份软件
 */


#ifndef _IENCRYPTOR_H
#define _IENCRYPTOR_H

class IEncryptor {
public: 
    
/**
 * @param inData
 * @param aad
 */
void Encrypt(istream & inData, AAD aad);
    
/**
 * @param inData
 * @param aad
 */
void Decrypt(istream & inData, AAD aad);
};

#endif //_IENCRYPTOR_H