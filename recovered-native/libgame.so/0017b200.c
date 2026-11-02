/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b200  Symbol: FUN_0017b200 */

uint FUN_0017b200(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0017b444 + 0x17b20c;
  if (param_1 == (int *)0x0) {
    param_2 = 0xffffffff;
  }
  else {
    if (param_3 != 0) {
      if (param_1[6] != 0) {
        (***(code ***)(iVar3 + DAT_0017b448))();
      }
      iVar1 = FUN_0019c904(param_3);
      param_1[6] = iVar1;
    }
    if ((param_2 & 1) == 0) {
      param_1[0x48] = 0;
    }
    else {
      param_1[0x48] = 1;
      param_2 = param_2 - 1;
      param_1[0x5a] = param_1[0x5a] | 1;
    }
    if ((param_2 & 4) == 0) {
      param_1[0x45] = 0;
    }
    else {
      param_1[0x45] = 2;
      param_2 = param_2 - 4;
      param_1[0x5a] = param_1[0x5a] | 4;
    }
    if ((param_2 & 8) != 0) {
      param_1[0x45] = param_1[0x45] | 4;
      param_2 = param_2 - 8;
      param_1[0x5a] = param_1[0x5a] | 8;
    }
    if ((param_2 & 2) == 0) {
      param_1[4] = 0;
    }
    else {
      param_1[4] = 1;
      param_2 = param_2 - 2;
      param_1[0x5a] = param_1[0x5a] | 2;
    }
    if ((param_2 & 0x80) == 0) {
      param_1[0x43] = 0;
    }
    else {
      param_1[0x43] = 1;
      param_2 = param_2 - 0x80;
      param_1[0x5a] = param_1[0x5a] | 0x80;
    }
    if ((param_2 & 0x100) == 0) {
      param_1[0x34] = 1;
    }
    else {
      param_1[0x34] = 0;
      *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)(iVar3 + DAT_0017b44c);
      param_2 = param_2 - 0x100;
      param_1[0x5a] = param_1[0x5a] | 0x100;
    }
    if ((param_2 & 0x10) == 0) {
      param_1[0x1a] = 0;
    }
    else {
      param_1[0x1a] = 1;
      if ((int)(param_2 << 0x19) < 0) {
        param_1[0x1d] = 0;
      }
      if ((int)(param_2 << 0x1a) < 0) {
        param_1[0x1c] = 0;
      }
      param_2 = param_2 - 0x10;
      param_1[0x5a] = param_1[0x5a] | 0x10;
    }
    if ((int)(param_2 << 0x19) < 0) {
      param_2 = param_2 - 0x40;
      *(undefined4 *)(*param_1 + 0x54) = 0;
    }
    if ((int)(param_2 << 0x1a) < 0) {
      param_2 = param_2 - 0x20;
      *(undefined4 *)(*param_1 + 0x58) = 0;
      *(undefined4 *)(*param_1 + 0x5c) = 0;
    }
    if ((param_2 & 0x200) != 0) {
      uVar2 = *(undefined4 *)(iVar3 + DAT_0017b454);
      *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(iVar3 + DAT_0017b450);
      *(undefined4 *)(*param_1 + 0x3c) = uVar2;
      *(undefined4 *)(*param_1 + 0x74) = 0;
      iVar3 = DAT_0017b458;
      *(undefined4 *)(*param_1 + 0x78) = 0;
      *(undefined4 *)(*param_1 + 0x6c) = 1;
      param_2 = param_2 + iVar3;
      param_1[0x5a] = param_1[0x5a] | 0x200;
    }
    iVar3 = DAT_0017b45c;
    if ((param_2 & 0x1000) == 0) {
      param_1[0x5b] = 1;
    }
    else {
      param_1[0x5b] = 0;
      param_2 = param_2 + iVar3;
      param_1[0x5a] = param_1[0x5a] | 0x1000;
    }
    if ((param_2 & 0x4000) != 0) {
      *(undefined4 *)(*param_1 + 100) = 0;
      param_2 = param_2 + DAT_0017b460;
      param_1[0x5a] = param_1[0x5a] | 0x4000;
    }
    iVar3 = DAT_0017b464;
    if ((param_2 & 0x2000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x2000;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b468;
    if ((param_2 & 0x800) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x800;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b46c;
    if ((param_2 & 0x10000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x10000;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b470;
    if ((param_2 & 0x20000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x20000;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b474;
    if ((param_2 & 0x40000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x40000;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b478;
    if ((param_2 & 0x80000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x80000;
      param_2 = param_2 + iVar3;
    }
    iVar3 = DAT_0017b47c;
    if ((param_2 & 0x100000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x100000;
      param_2 = param_2 + iVar3;
    }
    param_1[0x46] = 1;
  }
  return param_2;
}


