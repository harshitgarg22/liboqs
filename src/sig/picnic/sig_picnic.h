// SPDX-License-Identifier: MIT

#ifndef OQS_SIG_PICNIC_H
#define OQS_SIG_PICNIC_H

#include <oqs/oqs.h>

#ifdef OQS_ENABLE_SIG_picnic_L1_FS

#define OQS_SIG_picnic_L1_FS_length_public_key 33
#define OQS_SIG_picnic_L1_FS_length_secret_key 49
#define OQS_SIG_picnic_L1_FS_length_signature 34036

OQS_SIG *OQS_SIG_picnic_L1_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L1_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L1_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L1_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic_L1_UR

#define OQS_SIG_picnic_L1_UR_length_public_key 33
#define OQS_SIG_picnic_L1_UR_length_secret_key 49
#define OQS_SIG_picnic_L1_UR_length_signature 53965

OQS_SIG *OQS_SIG_picnic_L1_UR_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L1_UR_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L1_UR_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L1_UR_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic_L3_FS

#define OQS_SIG_picnic_L3_FS_length_public_key 49
#define OQS_SIG_picnic_L3_FS_length_secret_key 73
#define OQS_SIG_picnic_L3_FS_length_signature 76776

OQS_SIG *OQS_SIG_picnic_L3_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L3_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L3_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L3_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic_L3_UR

#define OQS_SIG_picnic_L3_UR_length_public_key 49
#define OQS_SIG_picnic_L3_UR_length_secret_key 73
#define OQS_SIG_picnic_L3_UR_length_signature 121849

OQS_SIG *OQS_SIG_picnic_L3_UR_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L3_UR_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L3_UR_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L3_UR_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic_L5_FS

#define OQS_SIG_picnic_L5_FS_length_public_key 65
#define OQS_SIG_picnic_L5_FS_length_secret_key 97
#define OQS_SIG_picnic_L5_FS_length_signature 132860

OQS_SIG *OQS_SIG_picnic_L5_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L5_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L5_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L5_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic_L5_UR

#define OQS_SIG_picnic_L5_UR_length_public_key 65
#define OQS_SIG_picnic_L5_UR_length_secret_key 97
#define OQS_SIG_picnic_L5_UR_length_signature 209510

OQS_SIG *OQS_SIG_picnic_L5_UR_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic_L5_UR_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L5_UR_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic_L5_UR_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic2_L1_FS

#define OQS_SIG_picnic2_L1_FS_length_public_key 33
#define OQS_SIG_picnic2_L1_FS_length_secret_key 49
#define OQS_SIG_picnic2_L1_FS_length_signature 13806

OQS_SIG *OQS_SIG_picnic2_L1_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic2_L1_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L1_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L1_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic2_L3_FS

#define OQS_SIG_picnic2_L3_FS_length_public_key 49
#define OQS_SIG_picnic2_L3_FS_length_secret_key 73
#define OQS_SIG_picnic2_L3_FS_length_signature 29754

OQS_SIG *OQS_SIG_picnic2_L3_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic2_L3_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L3_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L3_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#ifdef OQS_ENABLE_SIG_picnic2_L5_FS

#define OQS_SIG_picnic2_L5_FS_length_public_key 65
#define OQS_SIG_picnic2_L5_FS_length_secret_key 97
#define OQS_SIG_picnic2_L5_FS_length_signature 54736

OQS_SIG *OQS_SIG_picnic2_L5_FS_new(void);

OQS_API OQS_STATUS OQS_SIG_picnic2_L5_FS_keypair(uint8_t *public_key, uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L5_FS_sign(uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, const uint8_t *secret_key);
OQS_API OQS_STATUS OQS_SIG_picnic2_L5_FS_verify(const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key);

#endif

#endif // OQS_SIG_PICNIC_H
