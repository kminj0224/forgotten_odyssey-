/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167d14  Symbol: touches */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00167e5e) */
/* WARNING: Removing unreachable block (ram,0x00167e5e) */
/* cocos2d::CCTouchDispatcher::touches(cocos2d::CCSet*, cocos2d::CCEvent*, unsigned int) */

void __thiscall
cocos2d::CCTouchDispatcher::touches
          (CCTouchDispatcher *this,CCSet *param_1,CCEvent *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  CCObject *pCVar4;
  CCSet *this_00;
  int iVar5;
  CCMutableArray *pCVar6;
  int iVar7;
  code *pcVar8;
  uint *puVar9;
  CCTouchHandler **ppCVar10;
  uint uVar11;
  CCObject *pCVar12;
  CCTouchHandler *pCVar13;
  bool bVar14;
  bool bVar15;
  CCSet *local_38;
  CCTouchHandler **local_24;
  
  this[0x20] = (CCTouchDispatcher)0x1;
  bVar14 = *(int *)(*(int *)(this + 0x18) + 0x18) - *(int *)(*(int *)(this + 0x18) + 0x14) >> 2 != 0
  ;
  bVar15 = *(int *)(*(int *)(this + 0x1c) + 0x18) - *(int *)(*(int *)(this + 0x1c) + 0x14) >> 2 != 0
  ;
  bVar1 = bVar15 && bVar14;
  local_38 = param_1;
  if (bVar1) {
    local_38 = (CCSet *)CCSet::mutableCopy(param_1);
  }
  iVar7 = *(int *)(this + (param_3 + 0xc) * 4);
  if (bVar14) {
    for (iVar2 = CCSet::begin(param_1); iVar5 = CCSet::end(param_1), iVar2 != iVar5;
        iVar2 = thunk_FUN_001c7eac(iVar2)) {
      local_24 = *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x14);
      pCVar12 = *(CCObject **)(iVar2 + 0x10);
LAB_00167e1a:
      do {
        if (local_24 == *(CCTouchHandler ***)(*(int *)(this + 0x18) + 0x18)) goto LAB_00167e24;
        pCVar13 = *local_24;
        local_24 = local_24 + 1;
        if (pCVar13 == (CCTouchHandler *)0x0) goto LAB_00167e24;
        if (param_3 == 0) {
          piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
          iVar5 = (**(code **)(*piVar3 + 8))(piVar3,pCVar12,param_2);
          if (iVar5 == 0) goto LAB_00167e1a;
          pCVar4 = (CCObject *)
                   CCTargetedTouchHandler::getClaimedTouches((CCTargetedTouchHandler *)pCVar13);
          CCSet::addObject(pCVar4);
        }
        else {
          this_00 = (CCSet *)CCTargetedTouchHandler::getClaimedTouches
                                       ((CCTargetedTouchHandler *)pCVar13);
          iVar5 = CCSet::containsObject(this_00,pCVar12);
          if (iVar5 == 0) goto LAB_00167e1a;
          if (iVar7 == 2) {
            piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
            pcVar8 = *(code **)(*piVar3 + 0x10);
          }
          else {
            if (iVar7 != 3) {
              if (iVar7 == 1) {
                piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
                (**(code **)(*piVar3 + 0xc))(piVar3,pCVar12,param_2);
              }
              goto LAB_00167e00;
            }
            piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
            pcVar8 = *(code **)(*piVar3 + 0x14);
          }
          (*pcVar8)(piVar3,pCVar12,param_2);
          pCVar4 = (CCObject *)
                   CCTargetedTouchHandler::getClaimedTouches((CCTargetedTouchHandler *)pCVar13);
          CCSet::removeObject(pCVar4);
        }
LAB_00167e00:
        iVar5 = CCTargetedTouchHandler::isSwallowsTouches((CCTargetedTouchHandler *)pCVar13);
      } while (iVar5 == 0);
      if (bVar1) {
        CCSet::removeObject((CCObject *)local_38);
      }
LAB_00167e24:
    }
  }
  if ((bVar15) && (iVar2 = CCSet::count(local_38), 0 < iVar2)) {
    ppCVar10 = *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x14);
switchD_00167e5e_caseD_4:
    if (ppCVar10 == *(CCTouchHandler ***)(*(int *)(this + 0x1c) + 0x18)) goto LAB_00167ea2;
    pCVar13 = *ppCVar10;
    ppCVar10 = ppCVar10 + 1;
    if (pCVar13 == (CCTouchHandler *)0x0) goto LAB_00167ea2;
    switch(iVar7) {
    case 0:
      piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
      pcVar8 = *(code **)(*piVar3 + 0x18);
      break;
    case 1:
      piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
      pcVar8 = *(code **)(*piVar3 + 0x1c);
      break;
    case 2:
      piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
      pcVar8 = *(code **)(*piVar3 + 0x20);
      break;
    case 3:
      piVar3 = (int *)CCTouchHandler::getDelegate(pCVar13);
      pcVar8 = *(code **)(*piVar3 + 0x24);
      break;
    default:
      goto switchD_00167e5e_caseD_4;
    }
    (*pcVar8)(piVar3,local_38,param_2);
    goto switchD_00167e5e_caseD_4;
  }
LAB_00167ea2:
  if (bVar1) {
    CCObject::release((CCObject *)local_38);
  }
  uVar11 = 0;
  this[0x20] = (CCTouchDispatcher)0x0;
  if (this[0x22] != (CCTouchDispatcher)0x0) {
    this[0x22] = (CCTouchDispatcher)0x0;
    for (; puVar9 = *(uint **)(this + 0x28), uVar11 < *puVar9; uVar11 = uVar11 + 1) {
      forceRemoveDelegate(this,*(CCTouchDelegate **)(uVar11 * 4 + puVar9[2]));
    }
    *puVar9 = 0;
  }
  if (this[0x21] != (CCTouchDispatcher)0x0) {
    this[0x21] = (CCTouchDispatcher)0x0;
    ppCVar10 = *(CCTouchHandler ***)(*(int *)(this + 0x24) + 0x14);
    while (ppCVar10 !=
           *(CCTouchHandler ***)(*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x24) + 0x18)
          ) {
      pCVar13 = *ppCVar10;
      ppCVar10 = ppCVar10 + 1;
      if (pCVar13 == (CCTouchHandler *)0x0) break;
      iVar7 = __dynamic_cast(pCVar13,*(undefined4 *)(DAT_00167f40 + 0x167efc),
                             *(undefined4 *)(DAT_00167f44 + 0x167efe),0);
      if (iVar7 == 0) {
        pCVar6 = *(CCMutableArray **)(this + 0x1c);
      }
      else {
        pCVar6 = *(CCMutableArray **)(this + 0x18);
      }
      forceAddHandler(this,pCVar13,pCVar6);
    }
    CCMutableArray<cocos2d::CCTouchHandler*>::removeAllObjects
              (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x24),true);
  }
  if (this[0x2c] != (CCTouchDispatcher)0x0) {
    this[0x2c] = (CCTouchDispatcher)0x0;
    forceRemoveAllDelegates(this);
  }
  return;
}


