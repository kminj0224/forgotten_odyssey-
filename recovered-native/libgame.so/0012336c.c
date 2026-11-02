/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012336c  Symbol: tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012352c) */
/* WARNING: Removing unreachable block (ram,0x0012352c) */
/* GameScene::tick(float) */

undefined8 __thiscall GameScene::tick(GameScene *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_r1;
  int iVar4;
  int *piVar5;
  bool bVar6;
  GameScene *local_20;
  
  piVar5 = *(int **)(DAT_00123568 + 0x123378);
  iVar4 = *piVar5;
  local_20 = this;
  if (iVar4 == 1) {
    if (**(int **)(DAT_0012356c + 0x123384) == 0) {
      Game_Start_UI(this);
      *piVar5 = 0xb;
    }
    goto LAB_00123556;
  }
  if (iVar4 != 0xb) goto LAB_00123556;
  piVar5 = *(int **)(DAT_00123570 + 0x1233a4);
  iVar4 = *piVar5;
  uVar1 = __addsf3(*(undefined4 *)(iVar4 + 4),in_r1);
  *(undefined4 *)(iVar4 + 4) = uVar1;
  local_20 = (GameScene *)__addsf3(in_r1,*(undefined4 *)(iVar4 + 8));
  *(GameScene **)(iVar4 + 8) = local_20;
  if ((*(int *)(iVar4 + 0x40) == 2) || (bVar6 = *(int *)(iVar4 + 0x40) == 0, bVar6)) {
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(iVar4 + 0x10),local_20);
    if (iVar2 == 0) {
      iVar4 = __aeabi_fcmplt(*(undefined4 *)(iVar4 + 0xc),local_20);
      if ((iVar4 != 0) && (iVar4 = Random(0,0x32), iVar4 == 10)) {
        uVar3 = Random(0,100);
        if (uVar3 < 0x1f) {
          iVar4 = *(int *)(*piVar5 + 0x14);
        }
        else {
          if (uVar3 - 0x1f < 0x1e) {
            iVar4 = *(int *)(*piVar5 + 0x18);
          }
          else if (uVar3 - 0x3d < 0x14) {
            iVar4 = *(int *)(*piVar5 + 0x1c);
          }
          else if (uVar3 - 0x51 < 10) {
            iVar4 = *(int *)(*piVar5 + 0x20);
          }
          else if (uVar3 - 0x5b < 8) {
            iVar4 = *(int *)(*piVar5 + 0x24);
          }
          else {
            if (1 < uVar3 - 99) goto LAB_001234f8;
            iVar4 = *(int *)(*piVar5 + 0x28);
          }
          if (iVar4 == 0) goto LAB_001234f8;
        }
LAB_0012345c:
        Monster_Draw_Test((CCNode *)this,iVar4,false);
        goto LAB_00123464;
      }
    }
    else {
      iVar4 = Random(0,100);
      if (iVar4 < 0x1e) {
        iVar4 = *(int *)(*piVar5 + 0x14);
        if (iVar4 != 0) goto LAB_0012345c;
LAB_00123464:
        *(undefined4 *)(*piVar5 + 8) = 0;
      }
    }
  }
  else {
    iVar4 = __aeabi_fcmplt(*(undefined4 *)(iVar4 + 0x48),local_20);
    if (iVar4 != 0) {
      uVar3 = Random(0,100);
      if (uVar3 < 0x1f) {
        iVar4 = *(int *)(*piVar5 + 0x14);
      }
      else {
        if (uVar3 - 0x1f < 0x1e) {
          iVar4 = *(int *)(*piVar5 + 0x18);
        }
        else {
          if (0x13 < uVar3 - 0x3d) {
            if (uVar3 - 0x51 < 10) {
              iVar4 = *(int *)(*piVar5 + 0x20);
            }
            else if (uVar3 - 0x5b < 8) {
              iVar4 = *(int *)(*piVar5 + 0x24);
            }
            else {
              if (1 < uVar3 - 99) goto LAB_001234ec;
              iVar4 = *(int *)(*piVar5 + 0x28);
            }
            if (iVar4 == 0) goto LAB_001234ec;
            bVar6 = false;
            goto LAB_001234dc;
          }
          iVar4 = *(int *)(*piVar5 + 0x1c);
        }
        if (iVar4 == 0) goto LAB_001234ec;
      }
LAB_001234dc:
      Monster_Draw_Test((CCNode *)this,iVar4,bVar6);
      iVar4 = *piVar5;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + -1;
    }
LAB_001234ec:
    if (*(int *)(*piVar5 + 0x44) == 0) {
      *(undefined4 *)(*piVar5 + 0x40) = 2;
    }
  }
LAB_001234f8:
  iVar4 = *piVar5;
  if (*(char *)(iVar4 + 0x50) != '\0') {
    uVar1 = __addsf3(in_r1,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar1;
    iVar2 = __aeabi_fcmpgt(uVar1,*(undefined4 *)(iVar4 + 0x5c));
    if ((iVar2 != 0) && (*(int *)(iVar4 + 0x3c) != 0)) {
      uVar3 = Random(0,*(int *)(iVar4 + 0x3c) + -1);
      if (uVar3 < 5) {
        iVar4 = *piVar5;
        switch(uVar3) {
        case 0:
          iVar4 = *(int *)(iVar4 + 0x14);
          break;
        case 1:
          iVar4 = *(int *)(iVar4 + 0x18);
          break;
        case 2:
          iVar4 = *(int *)(iVar4 + 0x1c);
          break;
        case 3:
          iVar4 = *(int *)(iVar4 + 0x20);
          break;
        case 4:
          iVar4 = *(int *)(iVar4 + 0x24);
        }
        Monster_Draw_Test((CCNode *)this,iVar4,true);
      }
      *(undefined4 *)(*piVar5 + 0x58) = 0;
    }
  }
LAB_00123556:
  if (*(int *)(this + 0x124) == 10) {
    GAMESTARTUI_CALL(this);
  }
  return CONCAT44(in_r1,local_20);
}


