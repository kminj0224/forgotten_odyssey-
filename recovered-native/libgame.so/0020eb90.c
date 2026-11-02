/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020eb90  Symbol: FUN_0020eb90 */

void FUN_0020eb90(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (param_3 != (int *)0x0) {
    iVar4 = param_3[2];
    piVar5 = param_3;
    while (iVar4 == 0) {
      uVar1 = 1 << (*(int *)piVar5[1] - 0x17U & 0xff);
      if (*(int *)piVar5[1] - 0x17U < 0x11) {
        if ((uVar1 & DAT_0020ee44) != 0) {
          cVar3 = *(char *)(param_1 + 0x108);
LAB_0020ed44:
          if (cVar3 == ' ') {
LAB_0020ebfc:
            iVar2 = *(int *)(param_1 + 0x104);
            if (iVar2 == 0xff) {
LAB_0020ed7c:
              *(undefined *)(param_1 + 0x103) = 0;
              (**(code **)(param_1 + 0x10c))(param_1 + 4,iVar2,*(undefined4 *)(param_1 + 0x110));
              iVar4 = 1;
              *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
              iVar2 = 0;
            }
            else {
              iVar4 = iVar2 + 1;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x104);
            if (iVar4 == 0xff) {
              iVar4 = 0;
              *(undefined *)(param_1 + 0x103) = 0;
              (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
              iVar2 = 1;
              *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
            }
            else {
              iVar2 = iVar4 + 1;
            }
            *(undefined *)(param_1 + iVar4 + 4) = 0x20;
            *(undefined *)(param_1 + 0x108) = 0x20;
            *(int *)(param_1 + 0x104) = iVar2;
            if (iVar2 == 0xff) goto LAB_0020ed7c;
            iVar4 = iVar2 + 1;
          }
          iVar7 = 0;
          *(undefined *)(param_1 + iVar2 + 4) = 0x28;
          uVar6 = *(undefined4 *)(param_1 + 0x118);
          *(int *)(param_1 + 0x104) = iVar4;
          *(undefined *)(param_1 + 0x108) = 0x28;
          *(undefined4 *)(param_1 + 0x118) = 0;
          FUN_0020ee48(param_1,param_3,0);
          iVar4 = *(int *)(param_1 + 0x104);
          if (iVar4 == 0xff) {
            *(undefined *)(param_1 + 0x103) = 0;
            (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
            iVar2 = 1;
            *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
          }
          else {
            iVar2 = iVar4 + 1;
            iVar7 = iVar4;
          }
          *(undefined *)(param_1 + iVar7 + 4) = 0x29;
          *(int *)(param_1 + 0x104) = iVar2;
          *(undefined *)(param_1 + 0x108) = 0x29;
          if (iVar2 == 0xff) goto LAB_0020ec6c;
          iVar4 = iVar2 + 1;
          goto LAB_0020ecdc;
        }
        if ((uVar1 & 0x380) != 0) {
          cVar3 = *(char *)(param_1 + 0x108);
          if ((cVar3 != '(') && (cVar3 != '*')) goto LAB_0020ed44;
          goto LAB_0020ebfc;
        }
      }
      piVar5 = (int *)*piVar5;
      if (piVar5 == (int *)0x0) break;
      iVar4 = piVar5[2];
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_0020ee48(param_1,param_3);
  iVar2 = *(int *)(param_1 + 0x104);
  if (iVar2 == 0xff) {
LAB_0020ec6c:
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,iVar2,*(undefined4 *)(param_1 + 0x110));
    iVar4 = 1;
    iVar2 = 0;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar4 = iVar2 + 1;
  }
LAB_0020ecdc:
  *(undefined *)(param_1 + iVar2 + 4) = 0x28;
  *(int *)(param_1 + 0x104) = iVar4;
  *(undefined *)(param_1 + 0x108) = 0x28;
  if (*(int *)(param_2 + 8) != 0) {
    FUN_0020e41c(param_1);
    iVar4 = *(int *)(param_1 + 0x104);
  }
  if (iVar4 == 0xff) {
    iVar4 = 0;
    *(undefined *)(param_1 + 0x103) = 0;
    (**(code **)(param_1 + 0x10c))(param_1 + 4,0xff,*(undefined4 *)(param_1 + 0x110));
    iVar2 = 1;
    *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  }
  else {
    iVar2 = iVar4 + 1;
  }
  *(undefined *)(param_1 + iVar4 + 4) = 0x29;
  *(int *)(param_1 + 0x104) = iVar2;
  *(undefined *)(param_1 + 0x108) = 0x29;
  FUN_0020ee48(param_1,param_3,1);
  *(undefined4 *)(param_1 + 0x118) = uVar6;
  return;
}


