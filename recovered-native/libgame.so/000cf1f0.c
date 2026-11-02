/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cf1f0  Symbol: FileLode */

/* Equip_Layer::FileLode() */

void __thiscall Equip_Layer::FileLode(Equip_Layer *this)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  CCTexture2D *pCVar7;
  int *this_00;
  undefined4 *puVar8;
  int extraout_r1;
  CCPoint *pCVar9;
  int *piVar10;
  undefined4 *puVar11;
  CCTextAlignment CVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  code *pcVar20;
  int *piVar21;
  undefined8 uVar22;
  float fVar23;
  int local_fc;
  CCPoint aCStack_d4 [8];
  CCPoint aCStack_cc [8];
  CCPoint aCStack_c4 [8];
  CCPoint aCStack_bc [8];
  CCPoint aCStack_b4 [8];
  CCPoint aCStack_ac [8];
  CCPoint aCStack_a4 [8];
  CCPoint aCStack_9c [8];
  CCPoint aCStack_94 [8];
  undefined4 local_8c;
  int aiStack_88 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  char acStack_3c [32];
  int local_1c;
  
  iVar16 = DAT_000cf4f0 + 0xcf1fc;
  piVar13 = *(int **)(iVar16 + DAT_000cf4f4);
  local_1c = *piVar13;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000cf4f8 + 0xcf20c));
  piVar14 = *(int **)(iVar16 + DAT_000cf4fc);
  piVar15 = *(int **)(iVar16 + DAT_000cf508);
  piVar10 = *(int **)(iVar16 + DAT_000cf500);
  iVar17 = *piVar14 + *piVar10 * 0x50 + *piVar15 * 0x2d0;
  puVar18 = (undefined4 *)(iVar17 + DAT_000cf504);
  local_8c = *puVar18;
  aiStack_88[0] = puVar18[1];
  aiStack_88[1] = puVar18[2];
  aiStack_88[2] = puVar18[3];
  aiStack_88[3] = puVar18[4];
  puVar19 = (undefined4 *)(iVar17 + DAT_000cf50c);
  local_78 = *puVar19;
  uStack_74 = puVar19[1];
  uStack_70 = puVar19[2];
  local_6c = puVar19[3];
  uStack_68 = puVar19[4];
  puVar8 = (undefined4 *)(iVar17 + DAT_000cf510);
  local_64 = *puVar8;
  uStack_60 = puVar8[1];
  uStack_5c = puVar8[2];
  local_58 = puVar8[3];
  uStack_54 = puVar8[4];
  puVar11 = (undefined4 *)(iVar17 + DAT_000cf514);
  local_50 = *puVar11;
  uStack_4c = puVar11[1];
  uStack_48 = puVar11[2];
  local_44 = puVar11[3];
  uStack_40 = puVar11[4];
  local_fc = 0;
  *(undefined4 *)(this + 0x110) = *puVar18;
  *(undefined4 *)(this + 0x114) = *puVar19;
  piVar21 = (int *)(this + 0x110);
  *(undefined4 *)(this + 0x118) = *puVar8;
  *(undefined4 *)(this + 0x11c) = *puVar11;
  do {
    if (*piVar21 != 0) {
      iVar17 = aiStack_88[local_fc * 5];
      if (iVar17 == 0) {
        pcVar2 = (char *)(DAT_000cf518 + 0xcf2bc);
      }
      else if (iVar17 == 1) {
        pcVar2 = (char *)(DAT_000cf51c + 0xcf2c6);
      }
      else if (iVar17 == 2) {
        pcVar2 = (char *)(DAT_000cf520 + 0xcf2d0);
      }
      else {
        pcVar2 = (char *)(DAT_000cf524 + 0xcf2d6);
      }
      piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar2);
      iVar17 = *piVar3;
      pcVar20 = *(code **)(iVar17 + 0x3c);
      puVar11 = (undefined4 *)(local_fc * 0x10 + *(int *)(iVar16 + DAT_000cf528));
      uVar4 = __floatsisf(*puVar11);
      puVar8 = (undefined4 *)(**(code **)(iVar17 + 0x7c))(piVar3);
      uVar5 = __mulsf3(*puVar8,0x3f000000);
      __addsf3(uVar4,uVar5);
      uVar4 = __floatsisf(puVar11[1]);
      iVar17 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar5 = __mulsf3(*(undefined4 *)(iVar17 + 4),0x3f000000);
      uVar22 = __addsf3(uVar4,uVar5);
      cocos2d::CCPoint::CCPoint(aCStack_d4,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar20)(piVar3,aCStack_d4);
      (**(code **)(*(int *)this + 0xcc))(this,piVar3,local_fc,local_fc);
      memset(acStack_3c,0,0x1e);
      sprintf(acStack_3c,(char *)(DAT_000cf530 + 0xcf374),DAT_000cf534 + 0xcf376,
              *(undefined4 *)(*(int *)(iVar16 + DAT_000cf52c) + *piVar21 * 0xc + 4));
      piVar6 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
      pcVar20 = *(code **)(*piVar6 + 0x3c);
      puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
      __mulsf3(*puVar8,0x3f000000);
      iVar17 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar22 = __mulsf3(*(undefined4 *)(iVar17 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_cc,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar20)(piVar6,aCStack_cc);
      (**(code **)(*piVar3 + 0xcc))(piVar3,piVar6,DAT_000cf538,*piVar21);
      if (*piVar21 - 0x51U < 0x46) {
        pCVar7 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
        piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
        (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,0,0);
        Draw_Number::node();
        this_00 = (int *)Draw_Number::node();
        (**(code **)(*piVar6 + 0xcc))(piVar6,this_00,1,1);
        Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
        uVar22 = __aeabi_idivmod(*piVar21,10);
        fVar23 = (float)((ulonglong)uVar22 >> 0x20);
        pcVar20 = *(code **)(*piVar3 + 0x3c);
        if (extraout_r1 == 0) {
          cocos2d::CCPoint::CCPoint(aCStack_c4,(float)uVar22,fVar23);
          uVar22 = (*pcVar20)(piVar3,aCStack_c4);
          pcVar20 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_bc,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          (*pcVar20)(this_00,aCStack_bc);
          iVar17 = 10;
        }
        else {
          cocos2d::CCPoint::CCPoint(aCStack_b4,(float)uVar22,fVar23);
          uVar22 = (*pcVar20)(piVar3,aCStack_b4);
          pcVar20 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_ac,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          pCVar9 = aCStack_ac;
          iVar17 = extraout_r1;
LAB_000cf61c:
          (*pcVar20)(this_00,pCVar9);
        }
        CVar12 = 0;
      }
      else {
        if (*piVar21 != 0xa9) {
          if (*(int *)(*piVar14 + local_fc * 0x14 + *piVar10 * 0x50 + *piVar15 * 0x2d0 +
                      DAT_000cf648) != 0) {
            pCVar7 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
            piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
            (**(code **)(*piVar6 + 0xcc))(piVar6,piVar3,0,0);
            Draw_Number::node();
            this_00 = (int *)Draw_Number::node();
            (**(code **)(*piVar6 + 0xcc))(piVar6,this_00,1,1);
            uVar22 = Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
            iVar17 = *(int *)(*piVar14 + local_fc * 0x14 + *piVar10 * 0x50 + *piVar15 * 0x2d0 +
                             DAT_000cf648);
            pcVar20 = *(code **)(*piVar3 + 0x3c);
            cocos2d::CCPoint::CCPoint(aCStack_9c,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
            uVar22 = (*pcVar20)(piVar3,aCStack_9c);
            pcVar20 = *(code **)(*this_00 + 0x3c);
            cocos2d::CCPoint::CCPoint(aCStack_94,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
            pCVar9 = aCStack_94;
            goto LAB_000cf61c;
          }
          goto LAB_000cf628;
        }
        Draw_Number::node();
        this_00 = (int *)Draw_Number::node();
        (**(code **)(*piVar6 + 0xcc))(piVar6,this_00,1,1);
        uVar22 = Draw_Number::SetNumberFont((Draw_Number *)this_00,1);
        iVar17 = *(int *)(*piVar14 + local_fc * 0x14 + *piVar10 * 0x50 + *piVar15 * 0x2d0 +
                          DAT_000cf550 + 4);
        pcVar20 = *(code **)(*this_00 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_a4,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        (*pcVar20)(this_00,aCStack_a4);
        CVar12 = 2;
      }
      Draw_Number::SetNumber((Draw_Number *)this_00,iVar17,CVar12);
    }
LAB_000cf628:
    piVar21 = piVar21 + 1;
    local_fc = local_fc + 1;
    if (local_fc == 4) {
      if (local_1c == *piVar13) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


