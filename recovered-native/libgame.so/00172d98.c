/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172d98  Symbol: png_read_start_row */

void png_read_start_row(int param_1)

{
  char cVar1;
  byte bVar2;
  void *__s;
  undefined4 uVar3;
  uint uVar4;
  size_t __n;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_50 [4];
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34 [4];
  int iStack_24;
  int iStack_20;
  int local_1c;
  
  iVar7 = DAT_00173058 + 0x172da8;
  piVar6 = (int *)(iVar7 + DAT_0017305c);
  local_34[0] = *piVar6;
  local_34[1] = piVar6[1];
  local_34[2] = piVar6[2];
  local_34[3] = piVar6[3];
  iStack_24 = piVar6[4];
  iStack_20 = piVar6[5];
  local_1c = piVar6[6];
  local_50[0] = piVar6[7];
  local_50[1] = piVar6[8];
  local_50[2] = piVar6[9];
  local_50[3] = piVar6[10];
  iStack_40 = piVar6[0xb];
  iStack_3c = piVar6[0xc];
  local_38 = piVar6[0xd];
  *(undefined4 *)(param_1 + 0x13c) = 0;
  png_init_read_transformations(param_1);
  if (*(char *)(param_1 + DAT_00173060) == '\0') {
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x18c);
    bVar2 = *(byte *)(param_1 + DAT_00173064);
    uVar8 = *(uint *)(param_1 + 0x134);
  }
  else {
    if (*(int *)(param_1 + 0x134) << 0x1e < 0) {
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 400);
    }
    else {
      *(uint *)(param_1 + 0x194) = *(int *)(param_1 + 400) + 7U >> 3;
    }
    uVar3 = __udivsi3((*(int *)(param_1 + 0x18c) + -1 + local_50[*(byte *)(param_1 + 0x1e8)]) -
                      local_34[*(byte *)(param_1 + 0x1e8)]);
    iVar5 = DAT_00173064;
    *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    bVar2 = *(byte *)(param_1 + iVar5);
    uVar8 = *(uint *)(param_1 + 0x134);
  }
  uVar4 = (uint)bVar2;
  if (((int)(uVar8 << 0x1d) < 0) && (*(byte *)(param_1 + DAT_0017306c) < 8)) {
    uVar4 = 8;
  }
  if ((uVar8 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + 0x1ea);
    if (cVar1 == '\x03') {
      uVar4 = 0x20;
      if (*(short *)(param_1 + 0x1de) == 0) {
        uVar4 = 0x18;
      }
    }
    else if (cVar1 == '\0') {
      if (uVar4 < 8) {
        uVar4 = 8;
      }
      if (*(short *)(param_1 + 0x1de) != 0) {
        uVar4 = uVar4 << 1;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x1de) != 0)) {
      uVar4 = __divsi3(uVar4 << 2,3);
    }
  }
  if ((uVar8 & 0x8000) != 0) {
    cVar1 = *(char *)(param_1 + 0x1ea);
    if (cVar1 == '\x03') {
LAB_00172f9a:
      uVar4 = 0x20;
    }
    else if (cVar1 == '\0') {
      if (8 < (int)uVar4) goto LAB_00172f9a;
      uVar4 = 0x10;
    }
    else if (cVar1 == '\x02') {
      if ((int)uVar4 < 0x21) goto LAB_00172f9a;
      uVar4 = 0x40;
    }
  }
  if (-1 < (int)(uVar8 << 0x11)) goto LAB_00172e9c;
  if ((((*(short *)(param_1 + 0x1de) == 0) || ((uVar8 & 0x1000) == 0)) && ((uVar8 & 0x8000) == 0))
     && (cVar1 = *(char *)(param_1 + 0x1ea), cVar1 != '\x04')) {
    if ((int)uVar4 < 9) {
      uVar4 = 0x18;
      if (cVar1 == '\x06') {
        uVar4 = 0x20;
      }
      goto LAB_00172e9c;
    }
    uVar4 = 0x30;
    if (cVar1 != '\x06') goto LAB_00172e9c;
  }
  else if ((int)uVar4 < 0x11) {
    uVar4 = 0x20;
    goto LAB_00172e9c;
  }
  uVar4 = 0x40;
LAB_00172e9c:
  if (((int)(uVar8 << 0xb) < 0) &&
     (uVar8 = (uint)*(byte *)(param_1 + DAT_00173068) * (uint)*(byte *)(param_1 + 0x128),
     (int)uVar4 < (int)uVar8)) {
    uVar4 = uVar8;
  }
  uVar8 = *(int *)(param_1 + 0x18c) + 7U & 0xfffffff8;
  if ((int)uVar4 < 8) {
    uVar8 = uVar4 * uVar8 + 7 >> 3;
  }
  else {
    uVar8 = (uVar4 >> 3) * uVar8;
  }
  uVar8 = ((int)(uVar4 + 7) >> 3) + uVar8 + 0x31;
  if (*(uint *)(param_1 + 0x340) < uVar8) {
    png_free(param_1,*(undefined4 *)(param_1 + 0x30c));
    if (*(char *)(param_1 + DAT_00173060) == '\0') {
      uVar3 = png_malloc(param_1,uVar8);
      *(undefined4 *)(param_1 + 0x30c) = uVar3;
    }
    else {
      uVar3 = png_calloc(param_1,uVar8);
      *(undefined4 *)(param_1 + 0x30c) = uVar3;
    }
    *(uint *)(param_1 + 0x340) = uVar8;
    *(uint *)(param_1 + 0x1b0) =
         (*(int *)(param_1 + 0x30c) - (*(int *)(param_1 + 0x30c) + 0xfU & 0xf)) + 0x20;
    iVar5 = *(int *)(param_1 + 0x19c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x19c);
  }
  if (iVar5 != -1) {
    __n = iVar5 + 1;
    if (*(uint *)(param_1 + 0x344) < __n) {
      png_free(param_1,*(undefined4 *)(param_1 + 0x1ac));
      __s = (void *)png_malloc(param_1,*(int *)(param_1 + 0x19c) + 1);
      *(void **)(param_1 + 0x1ac) = __s;
      __n = *(int *)(param_1 + 0x19c) + 1;
      *(size_t *)(param_1 + 0x344) = __n;
    }
    else {
      __s = *(void **)(param_1 + 0x1ac);
    }
    memset(__s,0,__n);
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 0x40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,iVar7 + DAT_00173070);
}


