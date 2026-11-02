/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c478  Symbol: onEnter */

/* LogoLayer::onEnter() */

void __thiscall LogoLayer::onEnter(LogoLayer *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  CCFiniteTimeAction *pCVar5;
  CCArray *this_00;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  void **ppvVar11;
  void *pvVar12;
  code *pcVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  float extraout_s0;
  float fVar17;
  undefined8 uVar18;
  undefined8 extraout_d0;
  uint local_58;
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint local_38;
  int local_34;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  iVar16 = DAT_0012c6e0;
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  iVar1 = DAT_0012c6e8;
  iVar16 = iVar16 + 0x12c48a;
  iVar9 = 0;
  **(undefined4 **)(iVar16 + DAT_0012c6e4) = 0;
  **(undefined **)(iVar16 + DAT_0012c6ec) = 0;
  **(undefined **)(iVar16 + DAT_0012c6f0) = 0;
  **(undefined **)(iVar16 + DAT_0012c6f4) = 0;
  iVar8 = *(int *)(iVar16 + iVar1);
  iVar1 = *(int *)(iVar16 + DAT_0012c6f8);
  do {
    *(undefined *)(iVar9 + iVar1) = 0;
    puVar10 = (undefined *)(iVar9 + iVar8);
    iVar9 = iVar9 + 1;
    *puVar10 = 0;
  } while (iVar9 != 0x14);
  iVar8 = 0;
  iVar1 = *(int *)(iVar16 + DAT_0012c6fc);
  do {
    puVar10 = (undefined *)(iVar8 + iVar1);
    iVar8 = iVar8 + 1;
    *puVar10 = 0;
  } while (iVar8 != 0x32);
  pvVar2 = operator_new(DAT_0012c700);
  ppvVar11 = *(void ***)(iVar16 + DAT_0012c704);
  *ppvVar11 = pvVar2;
  FastSave();
  pvVar12 = *ppvVar11;
  iVar1 = 0;
  pvVar2 = pvVar12;
  do {
    iVar8 = 0;
    do {
      piVar14 = (int *)((int)pvVar2 + DAT_0012c708 + iVar8);
      if (0x96 < *piVar14) {
        *piVar14 = 0x96;
      }
      piVar14 = (int *)((int)pvVar2 + DAT_0012c70c + iVar8);
      if (*piVar14 < 0) {
        *piVar14 = 0;
      }
      iVar9 = DAT_0012c710;
      iVar8 = iVar8 + 4;
    } while (iVar8 != 0x24);
    iVar1 = iVar1 + 1;
    pvVar2 = (void *)((int)pvVar2 + 0x24);
  } while (iVar1 != 3);
  iVar8 = *(int *)((int)pvVar12 + DAT_0012c710);
  GamedayLibrary::GamedayLib::sharedLib();
  iVar1 = GamedayLibrary::GamedayLib::CallreturnCP();
  *(int *)((int)pvVar12 + iVar9) = iVar8 + iVar1;
  iVar1 = GamedayLibrary::GamedayLib::sharedLib();
  GamedayLibrary::GamedayLib::SetCP(iVar1);
  FileSave();
  local_3c = (_ccColor4B)0xff;
  local_3b = 0xff;
  local_3a = 0xff;
  local_39 = 0xff;
  uVar3 = cocos2d::CCLayerColor::layerWithColor(&local_3c);
  uVar18 = (**(code **)(*(int *)this + 0xcc))(this,uVar3,1,1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  uVar3 = 2;
  vDrawScript_Lode((char *)(DAT_0012c71c + 0x12c572),(char *)(DAT_0012c720 + 0x12c574),
                   (CCNode *)this,local_38,local_34,2,true,false);
  piVar14 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0xa8))();
  piVar14 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  piVar15 = *(int **)*puVar4;
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  this_00 = (CCArray *)(**(code **)(*piVar14 + 0x58))(piVar14);
  iVar1 = local_34;
  if ((this_00 != (CCArray *)0x0) &&
     (iVar8 = cocos2d::CCArray::count(this_00), iVar1 = local_34, iVar8 != 0)) {
    for (local_58 = 0; uVar7 = cocos2d::CCArray::count(this_00), local_58 < uVar7;
        local_58 = local_58 + 1) {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar14,local_58);
      if (piVar6 != (int *)0x0) {
        iVar8 = cocos2d::CCNode::numberOfRunningActions();
        if (iVar8 != 0) {
          cocos2d::CCNode::stopAllActions();
        }
        if (piVar15[0x50] == 0) {
          if (local_58 != 0) {
            (**(code **)(*piVar6 + 0x6c))(piVar6);
          }
        }
        else {
          iVar8 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar8 == 0) {
            (**(code **)(*piVar6 + 0x6c))(piVar6,1);
            iVar8 = *piVar15;
            iVar16 = __aeabi_fcmpeq(*(undefined4 *)(iVar8 + 0x4c),0);
            iVar1 = *piVar6;
            if (iVar16 == 0) {
              pcVar13 = *(code **)(iVar1 + 0xec);
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(iVar8 + 0x60);
              iVar16 = __aeabi_fcmpeq(uVar3,0);
              if ((iVar16 != 0) || (iVar16 = __aeabi_fcmpeq(uVar3,DAT_0012c728), iVar16 != 0))
              goto LAB_0012c652;
              uVar3 = 0xff;
              pcVar13 = *(code **)(iVar1 + 0xec);
            }
            (*pcVar13)(piVar6,uVar3);
LAB_0012c652:
            uVar3 = *(undefined4 *)(*piVar15 + 100);
            iVar16 = __aeabi_fcmpeq(uVar3,DAT_0012c72c);
            if (iVar16 != 0) {
              uVar3 = 0;
            }
            (**(code **)(*piVar6 + 0x24))(piVar6,uVar3);
            iVar1 = *piVar15;
            uVar3 = *(undefined4 *)(iVar1 + 0x58);
            iVar16 = __aeabi_fcmpeq(uVar3,DAT_0012c72c);
            if (iVar16 == 0) {
              pcVar13 = *(code **)(*piVar6 + 0x2c);
            }
            else {
              uVar3 = *(undefined4 *)(iVar1 + 0x18);
              pcVar13 = *(code **)(*piVar6 + 0x2c);
            }
            (*pcVar13)(piVar6,uVar3);
            iVar1 = *piVar15;
            uVar3 = *(undefined4 *)(iVar1 + 0x5c);
            iVar16 = __aeabi_fcmpeq(uVar3,DAT_0012c72c);
            if (iVar16 == 0) {
              pcVar13 = *(code **)(*piVar6 + 0x34);
            }
            else {
              uVar3 = *(undefined4 *)(iVar1 + 0x1c);
              pcVar13 = *(code **)(*piVar6 + 0x34);
            }
            (*pcVar13)(piVar6,uVar3);
            uVar3 = cocos2d::CCObject::copy();
                    /* WARNING: Subroutine does not return */
            cocos2d::CCSequence::actions(pCVar5,uVar3,pCVar5,0);
          }
        }
      }
      piVar15 = piVar15 + 1;
    }
  }
  piVar14 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012c860 + 0x12c75a));
  iVar8 = DAT_0012c864;
  *(int **)(this + 0x110) = piVar14;
  __divsf3(DAT_0012c868,**(undefined4 **)(iVar16 + iVar8));
  uVar18 = __extendsfdf2();
  uVar18 = __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_0012c850,DAT_0012c854);
  __adddf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_0012c858,DAT_0012c85c);
  floor((double)CONCAT44(uVar3,iVar1));
  puVar4 = *(undefined4 **)(iVar16 + DAT_0012c86c);
  __divdf3();
  uVar3 = __truncdfsf2();
  *puVar4 = uVar3;
  pcVar13 = *(code **)(*piVar14 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)extraout_d0,(float)((ulonglong)extraout_d0 >> 0x20));
  (*pcVar13)(piVar14,aCStack_30);
  piVar14 = *(int **)(this + 0x110);
  pcVar13 = *(code **)(*piVar14 + 0x3c);
  puVar4 = *(undefined4 **)(iVar16 + DAT_0012c870);
  __mulsf3(*puVar4,0x3f000000);
  uVar18 = __mulsf3(puVar4[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar13)(piVar14,aCStack_28);
  (**(code **)(**(int **)(this + 0x110) + 0xec))(*(int **)(this + 0x110),0);
  (**(code **)(*(int *)this + 200))(this,*(undefined4 *)(this + 0x110),0);
  fVar17 = (float)(**(code **)(**(int **)(this + 0x110) + 0x6c))(*(int **)(this + 0x110),0);
  piVar14 = (int *)cocos2d::CCFadeIn::actionWithDuration(fVar17);
  (**(code **)(*piVar14 + 0x24))();
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCSpawn::actions((CCFiniteTimeAction *)piVar14,0);
  uVar3 = cocos2d::CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(iVar16 + DAT_0012c874),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar3,0);
}


