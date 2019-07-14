#ifndef crypto_scalarmult_curve25519_H
#define crypto_scalarmult_curve25519_H

#define crypto_scalarmult_curve25519_tinynacl_BYTES 32
#define crypto_scalarmult_curve25519_tinynacl_SCALARBYTES 32
extern int crypto_scalarmult_curve25519_tinynacl(unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_scalarmult_curve25519_tinynacl_base(unsigned char *,const unsigned char *);

#define crypto_scalarmult_curve25519 crypto_scalarmult_curve25519_tinynacl
#define crypto_scalarmult_curve25519_base crypto_scalarmult_curve25519_tinynacl_base
#define crypto_scalarmult_curve25519_BYTES crypto_scalarmult_curve25519_tinynacl_BYTES
#define crypto_scalarmult_curve25519_SCALARBYTES crypto_scalarmult_curve25519_tinynacl_SCALARBYTES
#define crypto_scalarmult_curve25519_IMPLEMENTATION "tinynacl"
#define crypto_scalarmult_curve25519_VERSION "-"

#endif