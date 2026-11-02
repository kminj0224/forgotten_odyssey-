/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00132764  Symbol: Lode_Text */

/* Ending_Layer::Lode_Text(char const*) */

void __thiscall Ending_Layer::Lode_Text(Ending_Layer *this,char *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar12;
  float extraout_s0_05;
  undefined8 uVar13;
  float extraout_s1;
  float extraout_s1_00;
  int local_1dc;
  CCPoint aCStack_1cc [8];
  undefined4 local_1c4;
  undefined4 local_1c0;
  CCPoint aCStack_1bc [8];
  CCPoint aCStack_1b4 [8];
  byte local_1ac;
  byte local_1ab;
  byte local_1aa;
  int local_1c;
  
  piVar8 = *(int **)(DAT_001329c4 + 0x132770);
  local_1c = *piVar8;
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  if (iVar2 != 0) {
    pcVar9 = *(code **)(*(int *)this + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,8);
    (*pcVar9)(this,uVar3,1);
  }
  if ((*param_1 == '\0') && (param_1[1] == '\0')) {
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar4 + 0x6c))(piVar4,0);
    *(undefined4 *)(this + 0x148) = 0;
  }
  else {
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar4 + 0x6c))(piVar4,1);
  }
  piVar4 = (int *)cocos2d::CCLayer::node();
  (**(code **)(*(int *)this + 0xcc))(this,piVar4,8,8);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  uVar10 = *puVar6;
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))();
  uVar3 = __mulsf3(*puVar6,0x3f000000);
  __subsf3(uVar10,uVar3);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  iVar2 = (**(code **)(*piVar5 + 0x38))();
  uVar10 = *(undefined4 *)(iVar2 + 4);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  iVar2 = (**(code **)(*piVar5 + 0x7c))();
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
  uVar13 = __subsf3(uVar10,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_1cc,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (**(code **)(*piVar4 + 0x3c))(piVar4,aCStack_1cc);
  memset(&local_1ac,0,400);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_1c4,extraout_s0,extraout_s1);
  local_1dc = 0;
  do {
    if (*(int *)(*(int *)(DAT_001329e4 + 0x1329a6) + DAT_001329e8) <= local_1dc) {
      if (local_1c == *piVar8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar2 = __aeabi_fcmpgt(local_1c4,DAT_001329d0);
    if (iVar2 != 0) {
      local_1c4 = DAT_001329cc;
      local_1c0 = __subsf3(local_1c0,DAT_001329d4);
    }
    pbVar7 = (byte *)(param_1 + local_1dc);
    bVar1 = *pbVar7;
    uVar11 = (uint)bVar1;
    if (uVar11 == 0xd) {
      local_1c4 = DAT_001329cc;
      local_1c0 = __subsf3(local_1c0,DAT_001329d4);
      fVar12 = extraout_s0_00;
      local_1ac = bVar1;
LAB_00132930:
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_001329d8;
      if (uVar11 == 0x20) {
LAB_001328e8:
        local_1c4 = __addsf3(local_1c4,uVar3);
        fVar12 = extraout_s0_02;
        local_1ac = bVar1;
        goto LAB_00132930;
      }
      if (uVar11 != 0x2e) {
        if (0x1f < uVar11 - 0x21) {
          if ((uVar11 == 0x7e) || (uVar11 - 0x30 < 10)) {
            local_1ac = bVar1;
            local_1c4 = __addsf3(local_1c4,DAT_001329d4);
            fVar12 = extraout_s0_03;
          }
          else {
            local_1ab = pbVar7[1];
            local_1aa = pbVar7[2];
            local_1ac = bVar1;
            local_1c4 = __addsf3(local_1c4,DAT_001329d4);
            local_1dc = local_1dc + 2;
            fVar12 = extraout_s0_04;
          }
          goto LAB_00132930;
        }
        uVar3 = 0;
        if (pbVar7[-1] == 0x2e) {
          uVar3 = DAT_001329d8;
        }
        uVar3 = __addsf3(uVar3,DAT_001329d4);
        goto LAB_001328e8;
      }
      local_1c4 = __addsf3(local_1c4,DAT_001329d8);
      uVar3 = DAT_001329dc;
      fVar12 = extraout_s0_01;
      local_1ac = bVar1;
    }
    piVar5 = (int *)cocos2d::CCLabelTTF::labelWithString
                              ((char *)&local_1ac,(char *)(DAT_001329e0 + 0x13293c),fVar12);
    pcVar9 = *(code **)(*piVar5 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_1bc,extraout_s0_05,extraout_s1_00);
    (*pcVar9)(piVar5,aCStack_1bc);
    pcVar9 = *(code **)(*piVar5 + 0x3c);
    uVar13 = __addsf3(uVar3,local_1c4);
    cocos2d::CCPoint::CCPoint(aCStack_1b4,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar9)(piVar5,aCStack_1b4);
    (**(code **)(*piVar4 + 0xcc))(piVar4,piVar5,local_1dc,local_1dc);
    (**(code **)(*piVar5 + 0x6c))(piVar5,0);
    memset(&local_1ac,0,400);
    local_1dc = local_1dc + 1;
  } while( true );
}


