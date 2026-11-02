/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c56e0  Symbol: FUN_001c56e0 */

int * FUN_001c56e0(int *param_1,int *param_2)

{
  char *__s1;
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *__s2;
  char *pcVar7;
  char **ppcVar8;
  
  ppcVar8 = *(char ***)(*param_2 + 0x10);
  puVar6 = *(undefined4 **)(DAT_001c5960 + 0x1c56f8);
  *param_1 = (int)(puVar6 + 3);
  pcVar7 = *ppcVar8;
  if (pcVar7 == (char *)0x0) {
    FUN_001eda94(param_1,0,*puVar6,1,0x2a);
  }
  else {
    if (ppcVar8[1] != (char *)0x0) {
      iVar4 = 0;
      __s1 = pcVar7;
      do {
        ppcVar8 = ppcVar8 + 1;
        __s2 = *ppcVar8;
        iVar4 = iVar4 + 1;
        iVar1 = strcmp(__s1,__s2);
        if (iVar1 != 0) {
          FUN_001ee274(param_1,0x80);
          ppcVar8 = (char **)**(undefined4 **)(DAT_001c5964 + 0x1c5758);
          pcVar7 = *ppcVar8;
          sVar2 = strlen(pcVar7);
          FUN_001ee484(param_1,pcVar7,sVar2);
          iVar1 = *param_1;
          iVar4 = *(int *)(iVar1 + -0xc);
          uVar5 = iVar4 + 1;
          if ((*(uint *)(iVar1 + -8) < uVar5) || (0 < *(int *)(iVar1 + -4))) {
            FUN_001ee274(param_1,uVar5);
            iVar1 = *param_1;
            iVar4 = *(int *)(iVar1 + -0xc);
          }
          *(undefined *)(iVar1 + iVar4) = 0x3d;
          iVar4 = *param_1;
          if ((undefined4 *)(iVar4 + -0xc) != puVar6) {
            *(undefined4 *)(iVar4 + -4) = 0;
            *(uint *)(iVar4 + -0xc) = uVar5;
            *(undefined *)(iVar4 + uVar5) = 0;
          }
          pcVar7 = **(char ***)(*param_2 + 0x10);
          sVar2 = strlen(pcVar7);
          FUN_001ee484(param_1,pcVar7,sVar2);
          iVar4 = 4;
          do {
            iVar3 = *param_1;
            iVar1 = *(int *)(iVar3 + -0xc);
            uVar5 = iVar1 + 1;
            if ((*(uint *)(iVar3 + -8) < uVar5) || (0 < *(int *)(iVar3 + -4))) {
              FUN_001ee274(param_1,uVar5);
              iVar3 = *param_1;
              iVar1 = *(int *)(iVar3 + -0xc);
            }
            *(undefined *)(iVar3 + iVar1) = 0x3b;
            iVar1 = *param_1;
            if ((undefined4 *)(iVar1 + -0xc) != puVar6) {
              *(undefined4 *)(iVar1 + -4) = 0;
              *(uint *)(iVar1 + -0xc) = uVar5;
              *(undefined *)(iVar1 + uVar5) = 0;
            }
            ppcVar8 = ppcVar8 + 1;
            pcVar7 = *ppcVar8;
            sVar2 = strlen(pcVar7);
            FUN_001ee484(param_1,pcVar7,sVar2);
            iVar3 = *param_1;
            iVar1 = *(int *)(iVar3 + -0xc);
            uVar5 = iVar1 + 1;
            if ((*(uint *)(iVar3 + -8) < uVar5) || (0 < *(int *)(iVar3 + -4))) {
              FUN_001ee274(param_1,uVar5);
              iVar3 = *param_1;
              iVar1 = *(int *)(iVar3 + -0xc);
            }
            *(undefined *)(iVar3 + iVar1) = 0x3d;
            iVar1 = *param_1;
            if ((undefined4 *)(iVar1 + -0xc) != puVar6) {
              *(undefined4 *)(iVar1 + -4) = 0;
              *(uint *)(iVar1 + -0xc) = uVar5;
              *(undefined *)(iVar1 + uVar5) = 0;
            }
            pcVar7 = *(char **)(*(int *)(*param_2 + 0x10) + iVar4);
            sVar2 = strlen(pcVar7);
            FUN_001ee484(param_1,pcVar7,sVar2);
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0x18);
          return param_1;
        }
        __s1 = __s2;
      } while (iVar4 != 5);
    }
    sVar2 = strlen(pcVar7);
    FUN_001ed8d0(param_1,pcVar7,sVar2);
  }
  return param_1;
}


