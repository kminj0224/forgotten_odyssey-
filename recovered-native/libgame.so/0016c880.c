/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c880  Symbol: png_set_filter_heuristics */

void png_set_filter_heuristics
               (int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  if (param_1 == 0) {
    return;
  }
  if (2 < param_2) {
    png_warning(param_1,DAT_0016cb28 + 0x16c896 + DAT_0016cb30);
    return;
  }
  if (param_2 == 0) {
    uVar5 = 1;
    param_2 = 1;
  }
  else {
    uVar5 = (undefined)param_2;
  }
  if (((param_4 == (undefined4 *)0x0) || (param_3 < 0)) || (param_2 == 1)) {
    *(undefined *)(param_1 + DAT_0016cb2c) = 0;
    *(undefined *)(param_1 + 700) = uVar5;
  }
  else {
    *(char *)(param_1 + DAT_0016cb2c) = (char)param_3;
    *(undefined *)(param_1 + 700) = uVar5;
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0x2c0) == 0) {
        iVar4 = png_malloc(param_1,param_3);
        *(int *)(param_1 + 0x2c0) = iVar4;
        iVar7 = 0;
        while( true ) {
          *(undefined *)(iVar4 + iVar7) = 0xff;
          iVar7 = iVar7 + 1;
          if (param_3 <= iVar7) break;
          iVar4 = *(int *)(param_1 + 0x2c0);
        }
      }
      if (*(int *)(param_1 + 0x2c4) == 0) {
        uVar3 = png_malloc(param_1,param_3 * 2);
        *(undefined4 *)(param_1 + 0x2c4) = uVar3;
        iVar4 = png_malloc(param_1,param_3 * 2);
        *(int *)(param_1 + 0x2c8) = iVar4;
        iVar7 = 0;
        while( true ) {
          iVar2 = iVar7 * 2;
          iVar7 = iVar7 + 1;
          *(undefined2 *)(*(int *)(param_1 + 0x2c4) + iVar2) = 0x100;
          *(undefined2 *)(iVar4 + iVar2) = 0x100;
          if (param_3 <= iVar7) break;
          iVar4 = *(int *)(param_1 + 0x2c8);
        }
      }
      iVar4 = 0;
      iVar7 = 0;
      do {
        while( true ) {
          uVar3 = *param_4;
          uVar6 = param_4[1];
          iVar2 = __aeabi_dcmplt(uVar3,uVar6,DAT_0016cb00,DAT_0016cb04);
          if (iVar2 != 0) break;
          iVar2 = *(int *)(param_1 + 0x2c8);
          iVar7 = iVar7 + 1;
          uVar9 = __muldf3(uVar3,uVar6,DAT_0016cb08,DAT_0016cb0c);
          __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0016cb10,DAT_0016cb14);
          uVar1 = __fixunsdfsi();
          *(undefined2 *)(iVar2 + iVar4) = uVar1;
          iVar2 = *(int *)(param_1 + 0x2c4);
          uVar9 = __divdf3(DAT_0016cb08,DAT_0016cb0c,*param_4,param_4[1]);
          __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0016cb10,DAT_0016cb14);
          uVar1 = __fixunsdfsi();
          param_4 = param_4 + 2;
          *(undefined2 *)(iVar2 + iVar4) = uVar1;
          iVar4 = iVar4 + 2;
          if (param_3 <= iVar7) goto LAB_0016c982;
        }
        iVar2 = *(int *)(param_1 + 0x2c8);
        iVar7 = iVar7 + 1;
        *(undefined2 *)(*(int *)(param_1 + 0x2c4) + iVar4) = 0x100;
        param_4 = param_4 + 2;
        *(undefined2 *)(iVar2 + iVar4) = 0x100;
        iVar4 = iVar4 + 2;
      } while (iVar7 < param_3);
    }
  }
LAB_0016c982:
  if (*(int *)(param_1 + 0x2cc) == 0) {
    uVar3 = png_malloc(param_1,10);
    *(undefined4 *)(param_1 + 0x2cc) = uVar3;
    iVar4 = png_malloc(param_1,10);
    *(int *)(param_1 + 0x2d0) = iVar4;
    iVar7 = 0;
    while( true ) {
      *(undefined2 *)(*(int *)(param_1 + 0x2cc) + iVar7) = 8;
      *(undefined2 *)(iVar4 + iVar7) = 8;
      iVar7 = iVar7 + 2;
      if (iVar7 == 10) break;
      iVar4 = *(int *)(param_1 + 0x2d0);
    }
  }
  iVar4 = 0;
  iVar7 = 0;
  puVar8 = param_5;
LAB_0016ca06:
  do {
    if (param_5 != (undefined4 *)0x0) {
      uVar3 = *puVar8;
      uVar6 = puVar8[1];
      iVar2 = __aeabi_dcmplt(uVar3,uVar6,DAT_0016cb00,DAT_0016cb04);
      if (iVar2 == 0) {
        iVar2 = __aeabi_dcmpge(uVar3,uVar6,DAT_0016cb18,DAT_0016cb1c);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x2d0);
          uVar9 = __divdf3(DAT_0016cb20,DAT_0016cb24,uVar3,uVar6);
          __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0016cb10,DAT_0016cb14);
          uVar1 = __fixunsdfsi();
          *(undefined2 *)(iVar2 + iVar4) = uVar1;
          iVar2 = *(int *)(param_1 + 0x2cc);
          uVar9 = __muldf3(*puVar8,puVar8[1],DAT_0016cb20,DAT_0016cb24);
          __adddf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0016cb10,DAT_0016cb14);
          uVar1 = __fixunsdfsi();
          *(undefined2 *)(iVar2 + iVar4) = uVar1;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 2;
        puVar8 = puVar8 + 2;
        if (iVar7 == 5) {
          return;
        }
        goto LAB_0016ca06;
      }
    }
    iVar2 = *(int *)(param_1 + 0x2d0);
    iVar7 = iVar7 + 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2cc) + iVar4) = 8;
    puVar8 = puVar8 + 2;
    *(undefined2 *)(iVar2 + iVar4) = 8;
    iVar4 = iVar4 + 2;
    if (iVar7 == 5) {
      return;
    }
  } while( true );
}


