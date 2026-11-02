/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a825c  Symbol: jpeg_add_quant_table */

void jpeg_add_quant_table(int *param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1[5] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (3 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x20;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  iVar7 = param_2 + 0x16;
  iVar9 = param_1[iVar7];
  if (iVar9 == 0) {
    iVar9 = jpeg_alloc_quant_table(param_1);
    param_1[iVar7] = iVar9;
  }
  iVar2 = DAT_001a8334;
  iVar8 = 0;
  do {
    iVar5 = __divsi3(*param_3 * param_4 + 0x32,100);
    if (iVar5 < 1) {
      uVar3 = 1;
LAB_001a82bc:
      uVar6 = uVar3;
    }
    else {
      iVar4 = DAT_001a8334;
      bVar1 = param_5 != 0;
      if (iVar5 <= iVar2) {
        iVar4 = iVar5;
        bVar1 = 0xff < iVar5 && param_5 != 0;
      }
      uVar6 = 0xff;
      uVar3 = (short)iVar4;
      if (!bVar1) goto LAB_001a82bc;
    }
    iVar5 = iVar8 * 2;
    iVar8 = iVar8 + 1;
    *(undefined2 *)(iVar5 + iVar9) = uVar6;
    param_3 = param_3 + 1;
    if (iVar8 == 0x40) {
      *(undefined4 *)(param_1[iVar7] + 0x80) = 0;
      return;
    }
    iVar9 = param_1[iVar7];
  } while( true );
}


