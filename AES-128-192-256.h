#ifndef AES_128_192_256_H
#define AES_128_192_256_H

#include <stdint.h>

enum errors {
  NO_ERROR,
  INVALID_KEYSIZE_ERROR,
  ARGUMENT_NULL_ERROR
};

typedef struct {
  int nr;
  uint8_t rk[240];
} AesContext;

int AesInit(AesContext *ctx, const uint8_t *key, size_t keyLen);

void AesEncryptBlock(const AesContext *ctx, const uint8_t *in, uint8_t *out);

void AesDecryptBlock(const AesContext *ctx, const uint8_t *in, uint8_t *out);

#endif
