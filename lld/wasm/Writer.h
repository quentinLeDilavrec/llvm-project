//===- Writer.h -------------------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLD_WASM_WRITER_H
#define LLD_WASM_WRITER_H

namespace lld {
namespace wasm {

void writeResult();

extern const char *kDefaultModule;

} // namespace wasm
} // namespace lld

#endif
