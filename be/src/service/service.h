// This file is licensed under the Elastic License 2.0. Copyright 2021-present, StarRocks Limited.

#pragma once

#include "util/logging.h"

namespace starrocks {
class ExecEnv;

extern bool k_starrocks_exit;

void WaitingForFragmentsFinish(ExecEnv* exec_env, size_t max_loop_cnt_cfg);
} // namespace starrocks

void start_cn();
void start_be();
