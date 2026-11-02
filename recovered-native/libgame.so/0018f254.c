/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f254  Symbol: FUN_0018f254 */

void ** FUN_0018f254(void *param_1)

{
  void **ppvVar1;
  void *__s;
  void **ppvVar2;
  code **ppcVar3;
  int iVar4;
  
  iVar4 = DAT_0018f2a8 + 0x18f25e;
  if ((int)param_1 < 1) {
    param_1 = (void *)0x100;
  }
  ppcVar3 = *(code ***)(iVar4 + DAT_0018f2ac);
  ppvVar1 = (void **)(**ppcVar3)(0x10);
  ppvVar2 = ppvVar1;
  if (ppvVar1 != (void **)0x0) {
    ppvVar1[3] = (void *)0x0;
    ppvVar1[1] = param_1;
    ppvVar1[2] = (void *)0x0;
    __s = (void *)(**ppcVar3)((int)param_1 * 0x18);
    *ppvVar1 = __s;
    if (__s == (void *)0x0) {
      ppvVar2 = (void **)0x0;
      (***(code ***)(iVar4 + DAT_0018f2b0))(ppvVar1);
    }
    else {
      memset(__s,0,(int)param_1 * 0x18);
    }
  }
  return ppvVar2;
}


