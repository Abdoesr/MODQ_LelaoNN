/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2018-2019 Sultan Alsawaf <sultan@kerneltoast.com>.
 */
#ifndef _CPU_INPUT_BOOST_H_
#define _CPU_INPUT_BOOST_H_

#ifdef CONFIG_CPU_INPUT_BOOST
void cpu_input_boost_kick_flex(unsigned int duration_ms);
void cpu_input_boost_kick_core(unsigned int duration_ms, unsigned int cpu);
void cpu_input_boost_kick_cluster1(unsigned int duration_ms);
void cpu_input_boost_kick_cluster2(unsigned int duration_ms);
void cpu_input_boost_kick_cluster1_wake(unsigned int duration_ms);
void cpu_input_boost_kick_cluster2_wake(unsigned int duration_ms);
void gpu_boost_flex(unsigned int duration_ms);
#else
void cpu_input_boost_kick_flex(unsigned int duration_ms)
{
}
void cpu_input_boost_kick_core(unsigned int duration_ms, unsigned int cpu)
{
}
void cpu_input_boost_kick_cluster1(unsigned int duration_ms)
{
}
void cpu_input_boost_kick_cluster2(unsigned int duration_ms)
{
}
void cpu_input_boost_kick_cluster1_wake(unsigned int duration_ms)
{
}
void cpu_input_boost_kick_cluster2_wake(unsigned int duration_ms)
{
}
void gpu_boost_flex(unsigned int duration_ms)
{
}
#endif

#endif /* _CPU_INPUT_BOOST_H_ */
