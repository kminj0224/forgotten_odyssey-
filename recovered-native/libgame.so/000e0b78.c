/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0b78  Symbol: Buy_Item_View */

/* Market_Store::Buy_Item_View() */

void __thiscall Market_Store::Buy_Item_View(Market_Store *this)

{
  int *piVar1;
  int *piVar2;
  CCTexture2D *pCVar3;
  int *this_00;
  int iVar4;
  int extraout_r1;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  int local_80;
  int local_78;
  CCPoint aCStack_64 [8];
  CCPoint aCStack_5c [8];
  CCPoint aCStack_54 [8];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  iVar8 = DAT_000e0dbc + 0xe0b84;
  piVar5 = *(int **)(iVar8 + DAT_000e0dc0);
  local_80 = 0;
  local_1c = *piVar5;
  do {
    if (*(char *)(**(int **)(iVar8 + DAT_000e0dc8) + **(int **)(iVar8 + DAT_000e0dc4) * 200 +
                  local_80 + 6) == '\0') {
      __divsi3(local_80,10);
      goto LAB_000e0bce;
    }
    local_80 = local_80 + 1;
  } while (local_80 != 100);
  local_80 = 0;
LAB_000e0bce:
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e0dcc + 0xe0bd8));
  piVar2 = *(int **)(iVar8 + DAT_000e0dd0);
  iVar4 = 0;
  piVar9 = piVar2;
  do {
    if (local_80 <= *piVar9) {
      *(int *)(this + 0x140) = piVar2[iVar4 * 0xd + 1];
      *(int *)(this + 0x144) = piVar2[iVar4 * 0xd + 2];
      *(int *)(this + 0x148) = piVar2[iVar4 * 0xd + 3];
      *(int *)(this + 0x14c) = piVar2[iVar4 * 0xd + 4];
      *(int *)(this + 0x150) = piVar2[iVar4 * 0xd + 5];
      *(int *)(this + 0x154) = piVar2[iVar4 * 0xd + 6];
      break;
    }
    iVar4 = iVar4 + 1;
    piVar9 = piVar9 + 0xd;
    *(int *)(this + 0x140) = piVar2[0x76];
    *(int *)(this + 0x144) = piVar2[0x77];
    *(int *)(this + 0x148) = piVar2[0x78];
    *(int *)(this + 0x14c) = piVar2[0x79];
    *(int *)(this + 0x150) = piVar2[0x7a];
    *(int *)(this + 0x154) = piVar2[0x7b];
  } while (iVar4 != 10);
  local_78 = 0;
  piVar9 = (int *)(this + 0x140);
  do {
    memset(acStack_3c,0,0x1e);
    sprintf(acStack_3c,(char *)(DAT_000e0dd8 + 0xe0c74),DAT_000e0ddc + 0xe0c7c,
            *(undefined4 *)(*(int *)(iVar8 + DAT_000e0dd4) + *piVar9 * 0xc + 4));
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
    pcVar6 = *(code **)(*piVar2 + 0x3c);
    piVar7 = (int *)(local_78 + *(int *)(iVar8 + DAT_000e0de0));
    iVar4 = piVar7[2];
    __floatsisf(*piVar7 + (piVar7[1] - *piVar7) / 2);
    uVar10 = __floatsisf(iVar4 + (piVar7[3] - iVar4) / 2);
    cocos2d::CCPoint::CCPoint(aCStack_64,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar2,aCStack_64);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,DAT_000e0de4,*piVar9);
    if (*piVar9 - 0x51U < 0x46) {
      pCVar3 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
      piVar7 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar7,0,0);
      Draw_Number::node();
      this_00 = (int *)Draw_Number::node();
      (**(code **)(*piVar2 + 0xcc))(piVar2,this_00,1,1);
      Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
      uVar10 = __aeabi_idivmod(*piVar9,10);
      fVar11 = (float)((ulonglong)uVar10 >> 0x20);
      pcVar6 = *(code **)(*piVar7 + 0x3c);
      if (extraout_r1 == 0) {
        cocos2d::CCPoint::CCPoint(aCStack_5c,(float)uVar10,fVar11);
        uVar10 = (*pcVar6)(piVar7,aCStack_5c);
        pcVar6 = *(code **)(*this_00 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_54,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
        (*pcVar6)(this_00,aCStack_54);
        iVar4 = 10;
      }
      else {
        cocos2d::CCPoint::CCPoint(aCStack_4c,(float)uVar10,fVar11);
        uVar10 = (*pcVar6)(piVar7,aCStack_4c);
        pcVar6 = *(code **)(*this_00 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
        (*pcVar6)(this_00,aCStack_44);
        iVar4 = extraout_r1;
      }
      Draw_Number::SetNumber((Draw_Number *)this_00,iVar4,0);
    }
    piVar9 = piVar9 + 1;
    local_78 = local_78 + 0x10;
  } while (local_78 != 0x60);
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


