/**
 * (c) 2014 Nucleus project. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/common.h"
#include "nucleus/cpu/ppu/ppu_fields.h"

#include <string>

// Tables
std::string dis_table4(PPUFields code);
std::string dis_table4_(PPUFields code);
std::string dis_table19(PPUFields code);
std::string dis_table30(PPUFields code);
std::string dis_table31(PPUFields code);
std::string dis_table58(PPUFields code);
std::string dis_table59(PPUFields code);
std::string dis_table62(PPUFields code);
std::string dis_table63(PPUFields code);
std::string dis_table63_(PPUFields code);

// PPU Instructions
std::string dis_addx(PPUFields code);
std::string dis_addcx(PPUFields code);
std::string dis_addex(PPUFields code);
std::string dis_addi(PPUFields code);
std::string dis_addic(PPUFields code);
std::string dis_addic_(PPUFields code);
std::string dis_addis(PPUFields code);
std::string dis_addmex(PPUFields code);
std::string dis_addzex(PPUFields code);
std::string dis_andx(PPUFields code);
std::string dis_andcx(PPUFields code);
std::string dis_andi_(PPUFields code);
std::string dis_andis_(PPUFields code);
std::string dis_bx(PPUFields code);
std::string dis_bcx(PPUFields code);
std::string dis_bcctrx(PPUFields code);
std::string dis_bclrx(PPUFields code);
std::string dis_cmp(PPUFields code);
std::string dis_cmpi(PPUFields code);
std::string dis_cmpl(PPUFields code);
std::string dis_cmpli(PPUFields code);
std::string dis_cntlzdx(PPUFields code);
std::string dis_cntlzwx(PPUFields code);
std::string dis_crand(PPUFields code);
std::string dis_crandc(PPUFields code);
std::string dis_creqv(PPUFields code);
std::string dis_crnand(PPUFields code);
std::string dis_crnor(PPUFields code);
std::string dis_cror(PPUFields code);
std::string dis_crorc(PPUFields code);
std::string dis_crxor(PPUFields code);
std::string dis_dcbf(PPUFields code);
std::string dis_dcbst(PPUFields code);
std::string dis_dcbt(PPUFields code);
std::string dis_dcbtst(PPUFields code);
std::string dis_dcbz(PPUFields code);
std::string dis_divdx(PPUFields code);
std::string dis_divdux(PPUFields code);
std::string dis_divwx(PPUFields code);
std::string dis_divwux(PPUFields code);
std::string dis_eciwx(PPUFields code);
std::string dis_ecowx(PPUFields code);
std::string dis_eieio(PPUFields code);
std::string dis_eqvx(PPUFields code);
std::string dis_extsbx(PPUFields code);
std::string dis_extshx(PPUFields code);
std::string dis_extswx(PPUFields code);
std::string dis_icbi(PPUFields code);
std::string dis_isync(PPUFields code);
std::string dis_lbz(PPUFields code);
std::string dis_lbzu(PPUFields code);
std::string dis_lbzux(PPUFields code);
std::string dis_lbzx(PPUFields code);
std::string dis_ld(PPUFields code);
std::string dis_ldarx(PPUFields code);
std::string dis_ldu(PPUFields code);
std::string dis_ldux(PPUFields code);
std::string dis_ldx(PPUFields code);
std::string dis_lha(PPUFields code);
std::string dis_lhau(PPUFields code);
std::string dis_lhaux(PPUFields code);
std::string dis_lhax(PPUFields code);
std::string dis_lhbrx(PPUFields code);
std::string dis_lhz(PPUFields code);
std::string dis_lhzu(PPUFields code);
std::string dis_lhzux(PPUFields code);
std::string dis_lhzx(PPUFields code);
std::string dis_lmw(PPUFields code);
std::string dis_lswi(PPUFields code);
std::string dis_lswx(PPUFields code);
std::string dis_lwa(PPUFields code);
std::string dis_lwarx(PPUFields code);
std::string dis_lwaux(PPUFields code);
std::string dis_lwax(PPUFields code);
std::string dis_lwbrx(PPUFields code);
std::string dis_lwz(PPUFields code);
std::string dis_lwzu(PPUFields code);
std::string dis_lwzux(PPUFields code);
std::string dis_lwzx(PPUFields code);
std::string dis_mcrf(PPUFields code);
std::string dis_mcrfs(PPUFields code);
std::string dis_mfcr(PPUFields code);
std::string dis_mfocrf(PPUFields code);
std::string dis_mfspr(PPUFields code);
std::string dis_mftb(PPUFields code);
std::string dis_mtocrf(PPUFields code);
std::string dis_mtspr(PPUFields code);
std::string dis_mulhdx(PPUFields code);
std::string dis_mulhdux(PPUFields code);
std::string dis_mulhwx(PPUFields code);
std::string dis_mulhwux(PPUFields code);
std::string dis_mulldx(PPUFields code);
std::string dis_mulli(PPUFields code);
std::string dis_mullwx(PPUFields code);
std::string dis_nandx(PPUFields code);
std::string dis_negx(PPUFields code);
std::string dis_norx(PPUFields code);
std::string dis_orx(PPUFields code);
std::string dis_orcx(PPUFields code);
std::string dis_ori(PPUFields code);
std::string dis_oris(PPUFields code);
std::string dis_rfid(PPUFields code);
std::string dis_rldclx(PPUFields code);
std::string dis_rldcrx(PPUFields code);
std::string dis_rldicx(PPUFields code);
std::string dis_rldiclx(PPUFields code);
std::string dis_rldicrx(PPUFields code);
std::string dis_rldimix(PPUFields code);
std::string dis_rlwimix(PPUFields code);
std::string dis_rlwinmx(PPUFields code);
std::string dis_rlwnmx(PPUFields code);
std::string dis_sc(PPUFields code);
std::string dis_slbia(PPUFields code);
std::string dis_slbie(PPUFields code);
std::string dis_sldx(PPUFields code);
std::string dis_slwx(PPUFields code);
std::string dis_sradx(PPUFields code);
std::string dis_sradix(PPUFields code);
std::string dis_srawx(PPUFields code);
std::string dis_srawix(PPUFields code);
std::string dis_srdx(PPUFields code);
std::string dis_srwx(PPUFields code);
std::string dis_stb(PPUFields code);
std::string dis_stbu(PPUFields code);
std::string dis_stbux(PPUFields code);
std::string dis_stbx(PPUFields code);
std::string dis_std(PPUFields code);
std::string dis_stdcx_(PPUFields code);
std::string dis_stdu(PPUFields code);
std::string dis_stdux(PPUFields code);
std::string dis_stdx(PPUFields code);
std::string dis_sth(PPUFields code);
std::string dis_sthbrx(PPUFields code);
std::string dis_sthu(PPUFields code);
std::string dis_sthux(PPUFields code);
std::string dis_sthx(PPUFields code);
std::string dis_stmw(PPUFields code);
std::string dis_stswi(PPUFields code);
std::string dis_stswx(PPUFields code);
std::string dis_stw(PPUFields code);
std::string dis_stwbrx(PPUFields code);
std::string dis_stwcx_(PPUFields code);
std::string dis_stwu(PPUFields code);
std::string dis_stwux(PPUFields code);
std::string dis_stwx(PPUFields code);
std::string dis_subfx(PPUFields code);
std::string dis_subfcx(PPUFields code);
std::string dis_subfex(PPUFields code);
std::string dis_subfic(PPUFields code);
std::string dis_subfmex(PPUFields code);
std::string dis_subfzex(PPUFields code);
std::string dis_sync(PPUFields code);
std::string dis_td(PPUFields code);
std::string dis_tdi(PPUFields code);
std::string dis_tw(PPUFields code);
std::string dis_twi(PPUFields code);
std::string dis_xorx(PPUFields code);
std::string dis_xori(PPUFields code);
std::string dis_xoris(PPUFields code);

// Floating-Point Unit instructions
std::string dis_fabs(PPUFields code);
std::string dis_fadd(PPUFields code);
std::string dis_fadds(PPUFields code);
std::string dis_fcfid(PPUFields code);
std::string dis_fcmpo(PPUFields code);
std::string dis_fcmpu(PPUFields code);
std::string dis_fctid(PPUFields code);
std::string dis_fctidz(PPUFields code);
std::string dis_fctiw(PPUFields code);
std::string dis_fctiwz(PPUFields code);
std::string dis_fdiv(PPUFields code);
std::string dis_fdivs(PPUFields code);
std::string dis_fmadd(PPUFields code);
std::string dis_fmadds(PPUFields code);
std::string dis_fmr(PPUFields code);
std::string dis_fmsub(PPUFields code);
std::string dis_fmsubs(PPUFields code);
std::string dis_fmul(PPUFields code);
std::string dis_fmuls(PPUFields code);
std::string dis_fnabs(PPUFields code);
std::string dis_fneg(PPUFields code);
std::string dis_fnmadd(PPUFields code);
std::string dis_fnmadds(PPUFields code);
std::string dis_fnmsub(PPUFields code);
std::string dis_fnmsubs(PPUFields code);
std::string dis_fres(PPUFields code);
std::string dis_frsp(PPUFields code);
std::string dis_frsqrte(PPUFields code);
std::string dis_fsel(PPUFields code);
std::string dis_fsqrt(PPUFields code);
std::string dis_fsqrts(PPUFields code);
std::string dis_fsub(PPUFields code);
std::string dis_fsubs(PPUFields code);
std::string dis_mcrfs(PPUFields code);
std::string dis_lfd(PPUFields code);
std::string dis_lfdu(PPUFields code);
std::string dis_lfs(PPUFields code);
std::string dis_lfsu(PPUFields code);
std::string dis_mffs(PPUFields code);
std::string dis_mtfsb0(PPUFields code);
std::string dis_mtfsb1(PPUFields code);
std::string dis_mtfsf(PPUFields code);
std::string dis_mtfsfi(PPUFields code);
std::string dis_stfd(PPUFields code);
std::string dis_stfdu(PPUFields code);
std::string dis_stfs(PPUFields code);
std::string dis_stfsu(PPUFields code);

// Vector/SIMD instructions
std::string dis_mfvscr(PPUFields code);
std::string dis_mtvscr(PPUFields code);
std::string dis_unknown(PPUFields code);
std::string dis_vaddcuw(PPUFields code);
std::string dis_vaddfp(PPUFields code);
std::string dis_vaddsbs(PPUFields code);
std::string dis_vaddshs(PPUFields code);
std::string dis_vaddsws(PPUFields code);
std::string dis_vaddubm(PPUFields code);
std::string dis_vaddubs(PPUFields code);
std::string dis_vadduhm(PPUFields code);
std::string dis_vadduhs(PPUFields code);
std::string dis_vadduwm(PPUFields code);
std::string dis_vadduws(PPUFields code);
std::string dis_vand(PPUFields code);
std::string dis_vandc(PPUFields code);
std::string dis_vavgsb(PPUFields code);
std::string dis_vavgsh(PPUFields code);
std::string dis_vavgsw(PPUFields code);
std::string dis_vavgub(PPUFields code);
std::string dis_vavguh(PPUFields code);
std::string dis_vavguw(PPUFields code);
std::string dis_vcfsx(PPUFields code);
std::string dis_vcfux(PPUFields code);
std::string dis_vcmpbfp(PPUFields code);
std::string dis_vcmpbfp_(PPUFields code);
std::string dis_vcmpeqfp(PPUFields code);
std::string dis_vcmpeqfp_(PPUFields code);
std::string dis_vcmpequb(PPUFields code);
std::string dis_vcmpequb_(PPUFields code);
std::string dis_vcmpequh(PPUFields code);
std::string dis_vcmpequh_(PPUFields code);
std::string dis_vcmpequw(PPUFields code);
std::string dis_vcmpequw_(PPUFields code);
std::string dis_vcmpgefp(PPUFields code);
std::string dis_vcmpgefp_(PPUFields code);
std::string dis_vcmpgtfp(PPUFields code);
std::string dis_vcmpgtfp_(PPUFields code);
std::string dis_vcmpgtsb(PPUFields code);
std::string dis_vcmpgtsb_(PPUFields code);
std::string dis_vcmpgtsh(PPUFields code);
std::string dis_vcmpgtsh_(PPUFields code);
std::string dis_vcmpgtsw(PPUFields code);
std::string dis_vcmpgtsw_(PPUFields code);
std::string dis_vcmpgtub(PPUFields code);
std::string dis_vcmpgtub_(PPUFields code);
std::string dis_vcmpgtuh(PPUFields code);
std::string dis_vcmpgtuh_(PPUFields code);
std::string dis_vcmpgtuw(PPUFields code);
std::string dis_vcmpgtuw_(PPUFields code);
std::string dis_vctsxs(PPUFields code);
std::string dis_vctuxs(PPUFields code);
std::string dis_vexptefp(PPUFields code);
std::string dis_vlogefp(PPUFields code);
std::string dis_vmaddfp(PPUFields code);
std::string dis_vmaxfp(PPUFields code);
std::string dis_vmaxsb(PPUFields code);
std::string dis_vmaxsh(PPUFields code);
std::string dis_vmaxsw(PPUFields code);
std::string dis_vmaxub(PPUFields code);
std::string dis_vmaxuh(PPUFields code);
std::string dis_vmaxuw(PPUFields code);
std::string dis_vmhaddshs(PPUFields code);
std::string dis_vmhraddshs(PPUFields code);
std::string dis_vminfp(PPUFields code);
std::string dis_vminsb(PPUFields code);
std::string dis_vminsh(PPUFields code);
std::string dis_vminsw(PPUFields code);
std::string dis_vminub(PPUFields code);
std::string dis_vminuh(PPUFields code);
std::string dis_vminuw(PPUFields code);
std::string dis_vmladduhm(PPUFields code);
std::string dis_vmrghb(PPUFields code);
std::string dis_vmrghh(PPUFields code);
std::string dis_vmrghw(PPUFields code);
std::string dis_vmrglb(PPUFields code);
std::string dis_vmrglh(PPUFields code);
std::string dis_vmrglw(PPUFields code);
std::string dis_vmsummbm(PPUFields code);
std::string dis_vmsumshm(PPUFields code);
std::string dis_vmsumshs(PPUFields code);
std::string dis_vmsumubm(PPUFields code);
std::string dis_vmsumuhm(PPUFields code);
std::string dis_vmsumuhs(PPUFields code);
std::string dis_vmulesb(PPUFields code);
std::string dis_vmulesh(PPUFields code);
std::string dis_vmuleub(PPUFields code);
std::string dis_vmuleuh(PPUFields code);
std::string dis_vmulosb(PPUFields code);
std::string dis_vmulosh(PPUFields code);
std::string dis_vmuloub(PPUFields code);
std::string dis_vmulouh(PPUFields code);
std::string dis_vnmsubfp(PPUFields code);
std::string dis_vnor(PPUFields code);
std::string dis_vor(PPUFields code);
std::string dis_vperm(PPUFields code);
std::string dis_vpkpx(PPUFields code);
std::string dis_vpkshss(PPUFields code);
std::string dis_vpkshus(PPUFields code);
std::string dis_vpkswss(PPUFields code);
std::string dis_vpkswus(PPUFields code);
std::string dis_vpkuhum(PPUFields code);
std::string dis_vpkuhus(PPUFields code);
std::string dis_vpkuwum(PPUFields code);
std::string dis_vpkuwus(PPUFields code);
std::string dis_vrefp(PPUFields code);
std::string dis_vrfim(PPUFields code);
std::string dis_vrfin(PPUFields code);
std::string dis_vrfip(PPUFields code);
std::string dis_vrfiz(PPUFields code);
std::string dis_vrlb(PPUFields code);
std::string dis_vrlh(PPUFields code);
std::string dis_vrlw(PPUFields code);
std::string dis_vrsqrtefp(PPUFields code);
std::string dis_vsel(PPUFields code);
std::string dis_vsl(PPUFields code);
std::string dis_vslb(PPUFields code);
std::string dis_vsldoi(PPUFields code);
std::string dis_vslh(PPUFields code);
std::string dis_vslo(PPUFields code);
std::string dis_vslw(PPUFields code);
std::string dis_vspltb(PPUFields code);
std::string dis_vsplth(PPUFields code);
std::string dis_vspltisb(PPUFields code);
std::string dis_vspltish(PPUFields code);
std::string dis_vspltisw(PPUFields code);
std::string dis_vspltw(PPUFields code);
std::string dis_vsr(PPUFields code);
std::string dis_vsrab(PPUFields code);
std::string dis_vsrah(PPUFields code);
std::string dis_vsraw(PPUFields code);
std::string dis_vsrb(PPUFields code);
std::string dis_vsrh(PPUFields code);
std::string dis_vsro(PPUFields code);
std::string dis_vsrw(PPUFields code);
std::string dis_vsubcuw(PPUFields code);
std::string dis_vsubfp(PPUFields code);
std::string dis_vsubsbs(PPUFields code);
std::string dis_vsubshs(PPUFields code);
std::string dis_vsubsws(PPUFields code);
std::string dis_vsububm(PPUFields code);
std::string dis_vsububs(PPUFields code);
std::string dis_vsubuhm(PPUFields code);
std::string dis_vsubuhs(PPUFields code);
std::string dis_vsubuwm(PPUFields code);
std::string dis_vsubuws(PPUFields code);
std::string dis_vsum2sws(PPUFields code);
std::string dis_vsum4sbs(PPUFields code);
std::string dis_vsum4shs(PPUFields code);
std::string dis_vsum4ubs(PPUFields code);
std::string dis_vsumsws(PPUFields code);
std::string dis_vupkhpx(PPUFields code);
std::string dis_vupkhsb(PPUFields code);
std::string dis_vupkhsh(PPUFields code);
std::string dis_vupklpx(PPUFields code);
std::string dis_vupklsb(PPUFields code);
std::string dis_vupklsh(PPUFields code);
std::string dis_vxor(PPUFields code);

// Unknown PPU Instruction
std::string dis_unknown(PPUFields code);
