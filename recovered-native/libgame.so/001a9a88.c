/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9a88  Symbol: jpeg_mem_dest */

void jpeg_mem_dest(int *param_1,void **param_2,void **param_3)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  int iVar4;
  
  iVar4 = DAT_001a9b38 + 0x1a9a98;
  if ((param_3 == (void **)0x0) || (param_2 == (void **)0x0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  ppvVar3 = (void **)param_1[6];
  if (ppvVar3 == (void **)0x0) {
    ppvVar3 = (void **)(**(code **)param_1[1])(param_1,0,0x28);
    param_1[6] = (int)ppvVar3;
  }
  iVar1 = DAT_001a9b3c;
  ppvVar3[5] = param_2;
  ppvVar3[6] = param_3;
  ppvVar3[2] = (void *)(iVar4 + iVar1);
  ppvVar3[3] = (void *)(iVar4 + DAT_001a9b40);
  ppvVar3[4] = (void *)(iVar4 + DAT_001a9b44);
  ppvVar3[7] = (void *)0x0;
  pvVar2 = *param_2;
  if ((pvVar2 == (void *)0x0) || (*param_3 == (void *)0x0)) {
    pvVar2 = malloc(0x1000);
    *param_2 = pvVar2;
    ppvVar3[7] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 10;
      (**(code **)*param_1)(param_1);
    }
    *param_3 = (void *)0x1000;
    pvVar2 = *param_2;
  }
  ppvVar3[8] = pvVar2;
  *ppvVar3 = pvVar2;
  pvVar2 = *param_3;
  ppvVar3[9] = pvVar2;
  ppvVar3[1] = pvVar2;
  return;
}


