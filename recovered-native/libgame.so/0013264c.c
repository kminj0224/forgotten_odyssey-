/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013264c  Symbol: Lode_Name */

/* Ending_Layer::Lode_Name() */

void __thiscall Ending_Layer::Lode_Name(Ending_Layer *this)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  float extraout_s0;
  float fVar8;
  undefined8 uVar9;
  CCPoint aCStack_20 [12];
  
  iVar7 = *(int *)(DAT_0013274c + 0x132658);
  iVar5 = *(int *)(iVar7 + 8);
  if (((*(int *)(this + 0x140) == iVar5) || (iVar5 == -1)) || (iVar5 == 0xff)) {
    if ((*(int *)(iVar7 + 0x10) == -1) && (*(int *)(iVar7 + 0x1c) == -1)) {
      iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
      if (iVar5 != 0) {
        pcVar6 = *(code **)(*(int *)this + 0xd0);
        uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
        (*pcVar6)(this,uVar1,1);
      }
      (**(code **)(**(int **)(this + 0x114) + 0x6c))(*(int **)(this + 0x114),0);
    }
  }
  else {
    iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
    fVar8 = extraout_s0;
    if (iVar5 != 0) {
      pcVar6 = *(code **)(*(int *)this + 0xd0);
      uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
      fVar8 = (float)(*pcVar6)(this,uVar1,1);
    }
    piVar2 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (*(char **)(*(int *)(iVar7 + 8) * 4 +
                                         *(int *)(DAT_00132750 + 0x132696)),
                               (char *)(DAT_00132754 + 0x13269c),fVar8);
    pcVar6 = *(code **)(*piVar2 + 0x3c);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
    __subsf3(*puVar4,DAT_0013275c);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    iVar5 = (**(code **)(*piVar3 + 0x38))();
    uVar9 = __addsf3(*(undefined4 *)(iVar5 + 4),DAT_00132760);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar6)(piVar2,aCStack_20);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,9,9);
    (**(code **)(**(int **)(this + 0x114) + 0x6c))(*(int **)(this + 0x114),1);
    *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar7 + 8);
  }
  return;
}


