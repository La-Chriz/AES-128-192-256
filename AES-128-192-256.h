#ifndef AES_128_192_256_H
#define AES_128_192_256_H

#include <stdint.h>

typedef struct {
  int nr;
  uint8_t rk[240];
} AesContext;

int AesInit(AesContext *ctx, const uint8_t *key, size_t keyLen);

void AesEncryptBlock(AesContext *ctx, const uint8_t *in, uint8_t *out);

void AesDecryptBlock(AesContext *ctx, const uint8_t *in, uint8_t *out);

#endif
