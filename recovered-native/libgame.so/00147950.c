/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147950  Symbol: parseKerningEntry */

/* cocos2d::CCBMFontConfiguration::parseKerningEntry(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >) */

void __thiscall
cocos2d::CCBMFontConfiguration::parseKerningEntry(CCBMFontConfiguration *this,basic_string param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  size_t __size;
  uint uVar8;
  int *piVar9;
  void **ppvVar10;
  int iVar11;
  void *local_38;
  int local_30;
  char *local_2c;
  uint local_28;
  undefined auStack_24 [4];
  uint local_20;
  undefined auStack_1c [8];
  
  iVar1 = FUN_001ece40(param_1,DAT_00147c78 + 0x14795e,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(&local_2c,param_1,iVar1,iVar2 - iVar1);
  sscanf(local_2c,(char *)(DAT_00147c7c + 0x147986),&local_30);
  iVar1 = FUN_001ece40(param_1,DAT_00147c80 + 0x147992,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_24,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_2c,auStack_24);
  FUN_001ed6b8(auStack_24);
  sscanf(local_2c,(char *)(DAT_00147c84 + 0x1479c4),&local_28);
  iVar1 = FUN_001ece40(param_1,DAT_00147c88 + 0x1479d0,0);
  iVar2 = FUN_001ece70(param_1,0x20,iVar1);
  FUN_001eebe0(auStack_1c,param_1,iVar1,iVar2 - iVar1);
  FUN_001ee874(&local_2c,auStack_1c);
  FUN_001ed6b8(auStack_1c);
  sscanf(local_2c,(char *)(DAT_00147c8c + 0x147a02),&local_20);
  puVar3 = (uint *)calloc(0x28,1);
  puVar3[1] = local_20;
  *puVar3 = local_28 & 0xffff | local_30 << 0x10;
  puVar3[4] = 0;
  puVar3[7] = (uint)puVar3;
  puVar3[8] = 4;
  if (*(int *)(this + 0x30) == 0) {
    *(uint **)(this + 0x30) = puVar3;
    puVar3[3] = 0;
    pvVar4 = malloc(0x2c);
    puVar3[2] = (uint)pvVar4;
    if (*(void **)(*(int *)(this + 0x30) + 8) == (void *)0x0) goto LAB_00147b98;
    memset(*(void **)(*(int *)(this + 0x30) + 8),0,0x2c);
    *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x10) = *(int *)(this + 0x30) + 8;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 8) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 8) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x14) = 8;
    ppvVar10 = *(void ***)(*(int *)(this + 0x30) + 8);
    pvVar4 = malloc(0x180);
    *ppvVar10 = pvVar4;
    if (**(void ***)(*(int *)(this + 0x30) + 8) == (void *)0x0) goto LAB_00147b98;
    memset(**(void ***)(*(int *)(this + 0x30) + 8),0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x28) = DAT_00147c90;
  }
  else {
    *(uint **)(*(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x10) + 8) = puVar3;
    iVar2 = *(int *)(this + 0x30);
    iVar1 = *(int *)(iVar2 + 8);
    puVar3[3] = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x14);
    *(uint **)(*(int *)(iVar2 + 8) + 0x10) = puVar3 + 2;
  }
  iVar2 = DAT_00147c98;
  iVar1 = DAT_00147c94;
  *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0xc) =
       *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0xc) + 1;
  iVar7 = DAT_00147c9c;
  iVar11 = *(int *)(this + 0x30);
  puVar3[2] = *(uint *)(iVar11 + 8);
  uVar5 = (uint)*(byte *)puVar3 + iVar1 + (uint)*(byte *)((int)puVar3 + 3) * 0x1000000 +
          (uint)*(byte *)((int)puVar3 + 2) * 0x10000 + (uint)*(byte *)((int)puVar3 + 1) * 0x100 ^
          DAT_00147ca0;
  uVar6 = iVar7 - uVar5 ^ uVar5 << 8;
  uVar8 = (iVar2 - uVar5) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar5 << 0x10;
  uVar8 = uVar6 >> 5 ^ (uVar8 - uVar5) - uVar6;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar5 << 10;
  uVar5 = uVar6 >> 0xf ^ (uVar8 - uVar5) - uVar6;
  puVar3[9] = uVar5;
  piVar9 = *(int **)(iVar11 + 8);
  iVar2 = (uVar5 & piVar9[1] - 1U) * 0xc;
  iVar1 = *piVar9 + iVar2;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  iVar1 = *(int *)(this + 0x30);
  puVar3[6] = *(uint *)(**(int **)(iVar1 + 8) + iVar2);
  puVar3[5] = 0;
  iVar1 = *(int *)(**(int **)(iVar1 + 8) + iVar2);
  if (iVar1 != 0) {
    *(uint **)(iVar1 + 0xc) = puVar3 + 2;
  }
  *(uint **)(**(int **)(*(int *)(this + 0x30) + 8) + iVar2) = puVar3 + 2;
  iVar2 = **(int **)(*(int *)(this + 0x30) + 8) + iVar2;
  if (((uint)((*(int *)(iVar2 + 8) + 1) * 10) <= *(uint *)(iVar2 + 4)) &&
     (uVar5 = puVar3[2], *(int *)(uVar5 + 0x24) != 1)) {
    __size = *(int *)(uVar5 + 4) * 0x18;
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
LAB_00147b98:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(pvVar4,0,__size);
    iVar1 = 0;
    local_38 = (void *)0x0;
    *(uint *)(uVar5 + 0x18) =
         (uint)((*(int *)(uVar5 + 4) * 2 - 1U & *(uint *)(uVar5 + 0xc)) != 0) +
         (*(uint *)(uVar5 + 0xc) >> (*(int *)(uVar5 + 8) + 1U & 0xff));
    *(undefined4 *)(puVar3[2] + 0x1c) = 0;
    for (; ppvVar10 = (void **)puVar3[2], local_38 < ppvVar10[1];
        local_38 = (void *)((int)local_38 + 1)) {
      iVar2 = *(int *)((int)*ppvVar10 + iVar1);
      while (iVar2 != 0) {
        uVar5 = puVar3[2];
        iVar7 = *(int *)(iVar2 + 0x10);
        piVar9 = (int *)((int)pvVar4 +
                        (*(int *)(uVar5 + 4) * 2 - 1U & *(uint *)(iVar2 + 0x1c)) * 0xc);
        iVar11 = piVar9[1];
        piVar9[1] = iVar11 + 1U;
        if (*(uint *)(uVar5 + 0x18) < iVar11 + 1U) {
          *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
          iVar11 = __udivsi3(piVar9[1],*(undefined4 *)(puVar3[2] + 0x18));
          piVar9[2] = iVar11;
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(iVar2 + 0x10) = *piVar9;
        if (*piVar9 != 0) {
          *(int *)(*piVar9 + 0xc) = iVar2;
        }
        *piVar9 = iVar2;
        iVar2 = iVar7;
      }
      iVar1 = iVar1 + 0xc;
    }
    free(*ppvVar10);
    *(int *)(puVar3[2] + 4) = *(int *)(puVar3[2] + 4) << 1;
    *(int *)(puVar3[2] + 8) = *(int *)(puVar3[2] + 8) + 1;
    *(void **)puVar3[2] = pvVar4;
    uVar5 = puVar3[2];
    iVar1 = 0;
    if (*(uint *)(uVar5 + 0xc) >> 1 < *(uint *)(uVar5 + 0x1c)) {
      iVar1 = *(int *)(uVar5 + 0x20) + 1;
    }
    *(int *)(uVar5 + 0x20) = iVar1;
    if (1 < *(uint *)(puVar3[2] + 0x20)) {
      *(undefined4 *)(puVar3[2] + 0x24) = 1;
    }
  }
  FUN_001ed6b8(&local_2c);
  return;
}


