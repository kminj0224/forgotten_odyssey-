/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ced9c  Symbol: onEnter */

/* CP_Shop::onEnter() */

void __thiscall CP_Shop::onEnter(CP_Shop *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  CCTexture2D *pCVar5;
  int *this_00;
  int extraout_r1;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  float fVar14;
  int local_90;
  CCPoint local_7c;
  CCPoint local_78;
  int local_74;
  int local_70;
  CCPoint aCStack_6c [8];
  CCPoint aCStack_64 [8];
  CCPoint aCStack_5c [8];
  CCPoint aCStack_54 [8];
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar9 = *(int **)(DAT_000cf004 + 0xceda8);
  local_1c = *piVar9;
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  uVar13 = (**(code **)(*(int *)this + 0x114))(this,1);
  uVar13 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_7c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_74,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000cf00c + 0xcede2),local_7c,local_78,local_74,local_70);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000cf014 + 0xcedf6));
  puVar6 = *(undefined4 **)(DAT_000cf018 + 0xcee02);
  piVar12 = (int *)(this + 0x110);
  *(undefined4 *)(this + 0x110) = *puVar6;
  *(undefined4 *)(this + 0x114) = puVar6[1];
  uVar7 = puVar6[3];
  *(undefined4 *)(this + 0x118) = puVar6[2];
  *(undefined4 *)(this + 0x11c) = uVar7;
  local_90 = 0;
  do {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_000cf01c + 0xcee26));
    iVar10 = *piVar2;
    pcVar8 = *(code **)(iVar10 + 0x3c);
    puVar11 = (undefined4 *)(local_90 * 0x10 + *(int *)(DAT_000cf020 + 0xcee3a));
    uVar7 = __floatsisf(*puVar11);
    puVar6 = (undefined4 *)(**(code **)(iVar10 + 0x7c))(piVar2);
    uVar3 = __mulsf3(*puVar6,0x3f000000);
    __addsf3(uVar7,uVar3);
    uVar7 = __floatsisf(puVar11[1]);
    iVar10 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    uVar3 = __mulsf3(*(undefined4 *)(iVar10 + 4),0x3f000000);
    uVar13 = __addsf3(uVar7,uVar3);
    cocos2d::CCPoint::CCPoint(aCStack_6c,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar8)(piVar2,aCStack_6c);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_90,local_90);
    iVar10 = *piVar12;
    if (iVar10 != 0) {
      memset(acStack_3c,0,0x1e);
      sprintf(acStack_3c,(char *)(DAT_000cf028 + 0xceeca),DAT_000cf02c + 0xceecc,
              *(undefined4 *)(*(int *)(DAT_000cf024 + 0xceec0) + iVar10 * 0xc + 4));
      piVar4 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_3c);
      pcVar8 = *(code **)(*piVar4 + 0x3c);
      puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
      __mulsf3(*puVar6,0x3f000000);
      iVar10 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar13 = __mulsf3(*(undefined4 *)(iVar10 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_64,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      (*pcVar8)(piVar4,aCStack_64);
      (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,DAT_000cf030,*piVar12);
      if (*piVar12 - 0x51U < 0x46) {
        pCVar5 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
        piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
        (**(code **)(*piVar4 + 0xcc))(piVar4,piVar2,0,0);
        Draw_Number::node();
        this_00 = (int *)Draw_Number::node();
        (**(code **)(*piVar4 + 0xcc))(piVar4,this_00,1,1);
        Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
        uVar13 = __aeabi_idivmod(*piVar12,10);
        fVar14 = (float)((ulonglong)uVar13 >> 0x20);
        pcVar8 = *(code **)(*piVar2 + 0x3c);
        if (extraout_r1 == 0) {
          cocos2d::CCPoint::CCPoint(aCStack_5c,(float)uVar13,fVar14);
          uVar13 = (*pcVar8)(piVar2,aCStack_5c);
          pcVar8 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_54,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
          (*pcVar8)(this_00,aCStack_54);
          iVar10 = 10;
        }
        else {
          cocos2d::CCPoint::CCPoint(aCStack_4c,(float)uVar13,fVar14);
          uVar13 = (*pcVar8)(piVar2,aCStack_4c);
          pcVar8 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
          (*pcVar8)(this_00,aCStack_44);
          iVar10 = extraout_r1;
        }
        Draw_Number::SetNumber((Draw_Number *)this_00,iVar10,0);
      }
    }
    piVar12 = piVar12 + 1;
    local_90 = local_90 + 1;
  } while (local_90 != 4);
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


