/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8e60  Symbol: Box_Opening */

/* KG_RandomBox::Box_Opening() */

void __thiscall KG_RandomBox::Box_Opening(KG_RandomBox *this)

{
  CCNode *pCVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  InventoryLayer *this_00;
  New_Notice *this_01;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  int local_98;
  char acStack_80 [100];
  int local_1c;
  
  iVar11 = DAT_000e9010 + 0xe8e6c;
  piVar10 = *(int **)(iVar11 + DAT_000e9014);
  local_1c = *piVar10;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,0);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    cocos2d::CCNode::getChildByTag(pCVar1,0);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x110) = 2;
      memset(acStack_80,0,100);
      iVar3 = Random(1,0x96);
      piVar6 = *(int **)(iVar11 + DAT_000e9018);
      iVar12 = *piVar6;
      piVar8 = *(int **)(iVar11 + DAT_000e9020);
      iVar9 = *piVar8;
      iVar7 = iVar9 * 2000;
      iVar2 = 0;
      for (iVar13 = 0; iVar13 < *(int *)((DAT_000e901c + iVar9) * 4 + iVar12); iVar13 = iVar13 + 1)
      {
        iVar2 = iVar2 + 0x14;
        if (*(int *)(iVar12 + iVar7 + iVar2 + DAT_000e9024) == 0) {
          uVar4 = Random(0,3);
          iVar2 = DAT_000e9028;
          *(undefined4 *)(iVar12 + iVar13 * 0x14 + iVar7 + DAT_000e9028 + 4) = uVar4;
          iVar7 = DAT_000e902c;
          iVar13 = *piVar6 + iVar13 * 0x14 + *piVar8 * 2000;
          local_98 = ((int *)(iVar13 + iVar2))[1];
          *(int *)(iVar13 + iVar2) = iVar3;
          uVar4 = __floatsisf(*(undefined4 *)(*(int *)(iVar11 + DAT_000e9030) + iVar3 * 0x18 + 0x10)
                             );
          uVar14 = __floatsidf(local_98);
          __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000e9008,DAT_000e900c);
          uVar5 = __truncdfsf2();
          uVar5 = __addsf3(uVar5,0x3f800000);
          __mulsf3(uVar4,uVar5);
          uVar4 = __fixsfsi();
          iVar2 = DAT_000e9034;
          ((undefined4 *)(iVar13 + iVar7))[1] = uVar4;
          *(undefined4 *)(iVar13 + iVar7) = 0;
          *(undefined4 *)(iVar13 + iVar2) = uVar4;
          goto LAB_000e8f7c;
        }
      }
      local_98 = 0;
LAB_000e8f7c:
      if (**(int **)(iVar11 + DAT_000e9038) == 2) {
        iVar2 = (**(code **)(*(int *)this + 0x90))();
        this_00 = *(InventoryLayer **)(iVar2 + 0x114);
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0x90))(this);
        this_00 = *(InventoryLayer **)(iVar2 + 0x128);
      }
      InventoryLayer::reset(this_00);
      this_01 = (New_Notice *)New_Notice::node();
      piVar6 = (int *)(**(code **)(*(int *)this + 0x90))(this);
      (**(code **)(*piVar6 + 0xcc))(piVar6,this_01,DAT_000e903c,DAT_000e903c);
      sprintf(acStack_80,(char *)(DAT_000e9044 + 0xe8fd2),
              *(undefined4 *)(iVar3 * 0xc + *(int *)(iVar11 + DAT_000e9040)));
      *(int *)(this_01 + 0x120) = local_98;
      New_Notice::noticeWithTypeItem(this_01,0x16,(char *)0x0,iVar3,0,0x16,iVar3);
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
    }
  }
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


