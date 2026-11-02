/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001517b8  Symbol: addPointAt */

/* cocos2d::CCRibbon::addPointAt(cocos2d::CCPoint, float) */

void cocos2d::CCRibbon::addPointAt(CCPoint param_1,float param_2)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r1;
  CCPoint *extraout_r1;
  CCRibbonSegment *pCVar8;
  undefined4 in_r2;
  int iVar9;
  undefined4 in_r3;
  CCRibbonSegment **ppCVar10;
  int iVar11;
  int **ppiVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  CCRibbonSegment **ppCVar16;
  int *this;
  CCRibbonSegment *pCVar17;
  float fVar18;
  undefined8 uVar19;
  CCPoint aCStack_80 [8];
  int local_78;
  int local_74;
  CCPoint aCStack_70 [8];
  CCPoint local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  CCPoint aCStack_58 [8];
  CCPoint local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  CCPoint aCStack_40 [8];
  CCPoint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  undefined4 local_1c;
  
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(in_r1,uVar2);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar3 = CCDirector::getContentScaleFactor(pCVar1);
  uVar3 = __mulsf3(in_r2,uVar3);
  uVar4 = __mulsf3(in_r3,0x3f000000);
  if (*(char *)(param_1 + 0x14c) == '\0') {
    *(undefined4 *)(param_1 + 0x144) = uVar4;
    *(undefined4 *)(param_1 + 300) = uVar2;
    *(undefined4 *)(param_1 + 0x130) = uVar3;
    *(undefined *)(param_1 + 0x14c) = 1;
  }
  else {
    __subsf3(*(undefined4 *)(param_1 + 300),uVar2);
    uVar19 = __subsf3(*(undefined4 *)(param_1 + 0x130),uVar3);
    CCPoint::CCPoint(aCStack_80,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    uVar5 = ccpToAngle((cocos2d *)aCStack_80,extraout_r1);
    uVar19 = __addsf3(uVar5,DAT_001519a8);
    fVar18 = (float)CCPoint::CCPoint(aCStack_70,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    rotatePoint(&local_68,fVar18);
    __addsf3(uVar2,local_68);
    uVar19 = __addsf3(uVar3,local_64);
    uVar19 = CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20))
    ;
    fVar18 = (float)CCPoint::CCPoint(aCStack_58,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    rotatePoint(&local_50,fVar18);
    __addsf3(uVar2,local_50);
    uVar19 = __addsf3(uVar3,local_4c);
    CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    uVar5 = __subsf3(*(undefined4 *)(param_1 + 300),uVar2);
    uVar5 = __mulsf3(uVar5,uVar5);
    uVar6 = __subsf3(*(undefined4 *)(param_1 + 0x130),uVar3);
    uVar6 = __mulsf3(uVar6,uVar6);
    fVar18 = (float)__addsf3(uVar5,uVar6);
    sqrtf(fVar18);
    uVar5 = __divsf3();
    iVar7 = __addsf3(uVar5,*(undefined4 *)(param_1 + 0x134));
    pCVar17 = (CCRibbonSegment *)0x0;
    ppCVar10 = *(CCRibbonSegment ***)(*(int *)(param_1 + 0x114) + 0x18);
    ppCVar16 = *(CCRibbonSegment ***)(*(int *)(param_1 + 0x114) + 0x14);
    if (ppCVar10 != ppCVar16) {
      pCVar17 = ppCVar10[-1];
    }
    if ((int)ppCVar10 - (int)ppCVar16 >> 2 != 0) {
      while (ppCVar16 != *(CCRibbonSegment ***)(*(int *)(param_1 + 0x114) + 0x18)) {
        pCVar8 = *ppCVar16;
        ppCVar16 = ppCVar16 + 1;
        if ((pCVar8 != pCVar17) && (pCVar8[DAT_001519ac] != (CCRibbonSegment)0x0)) {
          CCMutableArray<cocos2d::CCRibbonSegment*>::addObject
                    (*(CCMutableArray<cocos2d::CCRibbonSegment*> **)(param_1 + 0x118),pCVar8);
        }
      }
    }
    uVar19 = CCMutableArray<cocos2d::CCRibbonSegment*>::removeObjectsInArray
                       (*(CCMutableArray<cocos2d::CCRibbonSegment*> **)(param_1 + 0x114),
                        *(CCMutableArray **)(param_1 + 0x118));
    if (0x31 < *(uint *)(pCVar17 + 0xa40)) {
      uVar19 = CCMutableArray<cocos2d::CCRibbonSegment*>::removeObjectsInArray
                         (*(CCMutableArray<cocos2d::CCRibbonSegment*> **)(param_1 + 0x114),
                          *(CCMutableArray **)(param_1 + 0x118));
    }
    piVar15 = (int *)0x0;
    iVar11 = *(int *)(*(int *)(param_1 + 0x114) + 0x18);
    if (iVar11 != *(int *)(*(int *)(param_1 + 0x114) + 0x14)) {
      piVar15 = *(int **)(iVar11 + -4);
    }
    if (0x31 < (uint)piVar15[0x290]) {
      ppiVar12 = *(int ***)(*(int *)(param_1 + 0x118) + 0x14);
      if (*(int *)(*(int *)(param_1 + 0x118) + 0x18) - (int)ppiVar12 >> 2 == 0) {
        this = (int *)operator_new(DAT_00151c30);
        CCObject::CCObject((CCObject *)this);
        *this = *(int *)(DAT_00151c34 + 0x1519c6) + 8;
        *(CCObject *)((int)this + DAT_00151c38) = (CCObject)0x0;
        this[0x290] = 0;
        *(undefined4 *)((int)this + DAT_00151c3c) = 0;
        CCRibbonSegment::init((CCRibbonSegment *)this);
      }
      else {
        this = *ppiVar12;
        CCObject::retain((CCObject *)this);
        iVar11 = *(int *)(param_1 + 0x118);
        if ((*(int *)(iVar11 + 0x14) != *(int *)(iVar11 + 0x18)) && (this != (int *)0x0)) {
          FUN_0015128e(iVar11,this);
        }
        CCRibbonSegment::reset((CCRibbonSegment *)this);
      }
      iVar11 = DAT_00151c44;
      *(int *)((int)this + DAT_00151c48) = piVar15[piVar15[0x290] + DAT_00151c40 + 1];
      iVar9 = piVar15[0x290];
      iVar13 = iVar9 * 6;
      iVar14 = (iVar9 + iVar11) * 4;
      this[5] = piVar15[iVar13 + -1];
      iVar11 = DAT_00151c4c;
      this[6] = piVar15[iVar9 * 6];
      this[7] = piVar15[iVar9 * 6 + 1];
      this[8] = piVar15[iVar13 + 2];
      this[9] = piVar15[iVar13 + 3];
      this[10] = piVar15[iVar13 + 4];
      *(int *)((int)this + DAT_00151c50) = piVar15[iVar14 + 0x131];
      this[0x132] = piVar15[iVar14 + iVar11 + 1];
      *(int *)((int)this + DAT_00151c54) = piVar15[iVar14 + 0x133];
      this[0x134] = piVar15[iVar14 + 0x134];
      this[0x290] = this[0x290] + 1;
      CCMutableArray<cocos2d::CCRibbonSegment*>::addObject
                (*(CCMutableArray<cocos2d::CCRibbonSegment*> **)(param_1 + 0x114),
                 (CCRibbonSegment *)this);
      uVar19 = CCObject::release((CCObject *)this);
      piVar15 = this;
    }
    if (piVar15[0x290] == 0) {
      fVar18 = (float)CCPoint::CCPoint(aCStack_40,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      rotatePoint(&local_38,fVar18);
      __addsf3(local_38,*(undefined4 *)(param_1 + 300));
      uVar19 = __addsf3(local_34,*(undefined4 *)(param_1 + 0x130));
      uVar19 = CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar19,
                                (float)((ulonglong)uVar19 >> 0x20));
      fVar18 = (float)CCPoint::CCPoint(aCStack_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      rotatePoint(&local_20,fVar18);
      __addsf3(local_20,*(undefined4 *)(param_1 + 300));
      uVar19 = __addsf3(local_1c,*(undefined4 *)(param_1 + 0x130));
      CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      uVar5 = __subsf3(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)((int)piVar15 + DAT_00151c48) = uVar5;
      piVar15[10] = 0;
      piVar15[5] = local_48;
      piVar15[6] = local_44;
      piVar15[7] = 0;
      piVar15[8] = local_30;
      piVar15[9] = local_2c;
      *(undefined4 *)((int)piVar15 + DAT_00151c50) = 0;
      piVar15[0x132] = *(int *)(param_1 + 0x134);
      *(undefined4 *)((int)piVar15 + DAT_00151c54) = 0x3f800000;
      piVar15[0x134] = *(int *)(param_1 + 0x134);
      piVar15[0x290] = piVar15[0x290] + 1;
    }
    iVar11 = piVar15[0x290];
    iVar14 = iVar11 * 6;
    iVar9 = iVar11 * 4;
    piVar15[iVar11 + 0x25d] = *(int *)(param_1 + 0x138);
    piVar15[iVar14 + 5] = local_78;
    piVar15[iVar14 + 6] = local_74;
    piVar15[iVar14 + 7] = 0;
    piVar15[iVar14 + 8] = local_60;
    piVar15[iVar14 + 9] = local_5c;
    piVar15[iVar14 + 10] = 0;
    piVar15[iVar9 + 0x131] = 0;
    piVar15[iVar9 + DAT_00151c4c + 1] = iVar7;
    piVar15[iVar9 + 0x133] = 0x3f800000;
    piVar15[iVar9 + 0x134] = iVar7;
    *(int *)(param_1 + 0x134) = iVar7;
    *(undefined4 *)(param_1 + 300) = uVar2;
    *(undefined4 *)(param_1 + 0x130) = uVar3;
    *(int *)(param_1 + 0x11c) = local_78;
    *(int *)(param_1 + 0x120) = local_74;
    *(int *)(param_1 + 0x124) = local_60;
    *(int *)(param_1 + 0x128) = local_5c;
    *(undefined4 *)(param_1 + 0x144) = uVar4;
    piVar15[0x290] = piVar15[0x290] + 1;
  }
  return;
}


