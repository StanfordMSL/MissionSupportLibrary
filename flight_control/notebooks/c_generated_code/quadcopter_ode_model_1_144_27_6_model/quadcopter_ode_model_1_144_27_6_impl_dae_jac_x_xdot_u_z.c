/* This file was automatically generated by CasADi 3.6.7.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_s7 CASADI_PREFIX(s7)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s2[4] = {0, 1, 0, 0};
static const casadi_int casadi_s3[3] = {0, 0, 0};
static const casadi_int casadi_s4[40] = {10, 10, 0, 0, 0, 0, 1, 2, 3, 9, 15, 21, 27, 0, 1, 2, 3, 4, 5, 7, 8, 9, 3, 4, 5, 6, 8, 9, 3, 4, 5, 6, 7, 9, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s5[23] = {10, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s6[22] = {10, 4, 0, 3, 7, 11, 15, 3, 4, 5, 6, 7, 8, 9, 6, 7, 8, 9, 6, 7, 8, 9};
static const casadi_int casadi_s7[3] = {10, 0, 0};

/* quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z:(i0[10],i1[10],i2[4],i3[0],i4[],i5[0])->(o0[10x10,27nz],o1[10x10,10nz],o2[10x4,15nz],o3[10x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=-1.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a0=2.7600000000000001e+01;
  a1=arg[2]? arg[2][0] : 0;
  a0=(a0*a1);
  a1=1.1439999999999999e+00;
  a0=(a0/a1);
  a1=2.;
  a2=arg[0]? arg[0][8] : 0;
  a3=(a1*a2);
  a3=(a0*a3);
  a3=(-a3);
  if (res[0]!=0) res[0][3]=a3;
  a4=arg[0]? arg[0][9] : 0;
  a5=(a1*a4);
  a5=(a0*a5);
  if (res[0]!=0) res[0][4]=a5;
  a6=arg[0]? arg[0][6] : 0;
  a7=(a6+a6);
  a7=(a0*a7);
  if (res[0]!=0) res[0][5]=a7;
  a7=5.0000000000000000e-01;
  a8=arg[2]? arg[2][3] : 0;
  a8=(a7*a8);
  if (res[0]!=0) res[0][6]=a8;
  a9=arg[2]? arg[2][2] : 0;
  a9=(a7*a9);
  a10=(-a9);
  if (res[0]!=0) res[0][7]=a10;
  a11=arg[2]? arg[2][1] : 0;
  a11=(a7*a11);
  if (res[0]!=0) res[0][8]=a11;
  a5=(-a5);
  if (res[0]!=0) res[0][9]=a5;
  if (res[0]!=0) res[0][10]=a3;
  a3=arg[0]? arg[0][7] : 0;
  a5=(a3+a3);
  a5=(a0*a5);
  if (res[0]!=0) res[0][11]=a5;
  a5=(-a8);
  if (res[0]!=0) res[0][12]=a5;
  if (res[0]!=0) res[0][13]=a11;
  if (res[0]!=0) res[0][14]=a9;
  a12=(a1*a6);
  a12=(a0*a12);
  a13=(-a12);
  if (res[0]!=0) res[0][15]=a13;
  a13=(a1*a3);
  a13=(a0*a13);
  a13=(-a13);
  if (res[0]!=0) res[0][16]=a13;
  a14=(a2+a2);
  a14=(a0*a14);
  a14=(-a14);
  if (res[0]!=0) res[0][17]=a14;
  if (res[0]!=0) res[0][18]=a9;
  a11=(-a11);
  if (res[0]!=0) res[0][19]=a11;
  if (res[0]!=0) res[0][20]=a8;
  if (res[0]!=0) res[0][21]=a13;
  if (res[0]!=0) res[0][22]=a12;
  a12=(a4+a4);
  a0=(a0*a12);
  a0=(-a0);
  if (res[0]!=0) res[0][23]=a0;
  if (res[0]!=0) res[0][24]=a11;
  if (res[0]!=0) res[0][25]=a10;
  if (res[0]!=0) res[0][26]=a5;
  a5=1.;
  if (res[1]!=0) res[1][0]=a5;
  if (res[1]!=0) res[1][1]=a5;
  if (res[1]!=0) res[1][2]=a5;
  if (res[1]!=0) res[1][3]=a5;
  if (res[1]!=0) res[1][4]=a5;
  if (res[1]!=0) res[1][5]=a5;
  if (res[1]!=0) res[1][6]=a5;
  if (res[1]!=0) res[1][7]=a5;
  if (res[1]!=0) res[1][8]=a5;
  if (res[1]!=0) res[1][9]=a5;
  a5=2.4125874125874127e+01;
  a10=(a6*a2);
  a11=(a3*a4);
  a10=(a10+a11);
  a10=(a1*a10);
  a10=(a5*a10);
  a10=(-a10);
  if (res[2]!=0) res[2][0]=a10;
  a10=(a3*a2);
  a11=(a6*a4);
  a10=(a10-a11);
  a1=(a1*a10);
  a1=(a5*a1);
  a1=(-a1);
  if (res[2]!=0) res[2][1]=a1;
  a1=casadi_sq(a4);
  a10=casadi_sq(a6);
  a1=(a1-a10);
  a10=casadi_sq(a3);
  a1=(a1-a10);
  a10=casadi_sq(a2);
  a1=(a1+a10);
  a5=(a5*a1);
  a5=(-a5);
  if (res[2]!=0) res[2][2]=a5;
  a4=(a7*a4);
  a4=(-a4);
  if (res[2]!=0) res[2][3]=a4;
  a2=(a7*a2);
  a5=(-a2);
  if (res[2]!=0) res[2][4]=a5;
  a3=(a7*a3);
  if (res[2]!=0) res[2][5]=a3;
  a7=(a7*a6);
  if (res[2]!=0) res[2][6]=a7;
  if (res[2]!=0) res[2][7]=a2;
  if (res[2]!=0) res[2][8]=a4;
  a6=(-a7);
  if (res[2]!=0) res[2][9]=a6;
  if (res[2]!=0) res[2][10]=a3;
  a3=(-a3);
  if (res[2]!=0) res[2][11]=a3;
  if (res[2]!=0) res[2][12]=a7;
  if (res[2]!=0) res[2][13]=a4;
  if (res[2]!=0) res[2][14]=a2;
  return 0;
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_release(int mem) {
}

CASADI_SYMBOL_EXPORT void quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_incref(void) {
}

CASADI_SYMBOL_EXPORT void quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_n_in(void) { return 6;}

CASADI_SYMBOL_EXPORT casadi_int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_real quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    case 5: return "i5";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    case 4: return casadi_s3;
    case 5: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s5;
    case 2: return casadi_s6;
    case 3: return casadi_s7;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

CASADI_SYMBOL_EXPORT int quadcopter_ode_model_1_144_27_6_impl_dae_jac_x_xdot_u_z_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 6*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 4*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 0*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif