/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ead5c  Symbol: Item_Hero_Equip_View */

/* Hero_HeroEquip::Item_Hero_Equip_View(int, int) */

void __thiscall Hero_HeroEquip::Item_Hero_Equip_View(Hero_HeroEquip *this,int param_1,int param_2)

{
  CCNode *pCVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_54;
  int aiStack_40 [4];
  undefined4 local_30;
  int local_2c [4];
  undefined4 local_1c;
  
  memset(aiStack_40,0,0x14);
  memset(local_2c,0,0x14);
  local_2c[0] = 7;
  local_2c[1] = 7;
  aiStack_40[2] = 4;
  aiStack_40[1] = 1;
  local_2c[2] = 6;
  iVar8 = 2;
  aiStack_40[3] = 2;
  local_2c[3] = 5;
  local_30 = 3;
  local_1c = 5;
  local_54 = 0;
  do {
    if (param_2 == 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      iVar9 = *(int *)((int)aiStack_40 + local_54);
      if (((param_1 == iVar9) || (param_1 == *(int *)((int)local_2c + local_54))) ||
         (param_1 - 8U < 7)) {
        piVar2 = *(int **)(DAT_000eafec + 0xeae0a);
        piVar10 = *(int **)(DAT_000eaff0 + 0xeae20);
        if (*(int *)(*piVar10 + (iVar8 + -1 + *piVar2 * 9 + DAT_000eaffc) * 4 + 4) <
            *(int *)(*(int *)(DAT_000eaff4 + 0xeae34) +
                     *(int *)(DAT_000eaff8 +
                             *piVar10 + *piVar2 * 2000 + *(int *)(this + 0x120) * 0x14) * 0x18 + 8))
        goto LAB_000eaf9a;
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
        uVar6 = 0;
        if (((param_1 != iVar9) && (uVar6 = 1, param_1 != *(int *)((int)local_2c + local_54))) &&
           (uVar6 = 2, 2 < param_1 - 8U)) {
          uVar6 = -(uint)(param_1 - 10U < 5) & 3;
        }
        iVar9 = *piVar10 + *(int *)(this + 0x120) * 0x14 + *piVar2 * 2000;
        if (*(int *)(iVar9 + DAT_000eaff8) == 0) {
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
          (**(code **)(*piVar2 + 0x6c))(piVar2,0);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
          pcVar7 = *(code **)(*piVar2 + 0x6c);
          goto LAB_000eafc4;
        }
        if (uVar6 - 2 < 2) {
LAB_000eaf44:
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
          uVar5 = 0;
          pcVar7 = *(code **)(*piVar2 + 0x6c);
LAB_000eaf56:
          (*pcVar7)(piVar2,uVar5);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
          uVar5 = 0;
          pcVar7 = *(code **)(*piVar2 + 0x6c);
        }
        else {
          iVar4 = *(int *)(*piVar10 + uVar6 * 0x14 + (iVar8 + -1) * 0x50 + *piVar2 * 0x2d0 +
                           DAT_000eb004 + 4);
          iVar9 = *(int *)(iVar9 + DAT_000eb000 + 4);
          if (iVar4 == iVar9) goto LAB_000eaf44;
          if (iVar4 < iVar9) {
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
            piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
            uVar5 = 1;
            pcVar7 = *(code **)(*piVar2 + 0x6c);
            goto LAB_000eaf56;
          }
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
          (**(code **)(*piVar2 + 0x6c))(piVar2,0);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
          uVar5 = 1;
          pcVar7 = *(code **)(*piVar2 + 0x6c);
        }
      }
      else {
LAB_000eaf9a:
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        (**(code **)(*piVar2 + 0x6c))(piVar2,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
        pcVar7 = *(code **)(*piVar2 + 0x6c);
LAB_000eafc4:
        (*pcVar7)(piVar2,0);
        piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        uVar5 = 0x7f;
        pcVar7 = *(code **)(*piVar2 + 0xec);
      }
      (*pcVar7)(piVar2,uVar5);
    }
    iVar8 = iVar8 + 1;
    local_54 = local_54 + 4;
    if (iVar8 == 7) {
      return;
    }
  } while( true );
}


