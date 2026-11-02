/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fcf2c  Symbol: Lethal */

/* Hero9::Lethal() */

Hero9 * __thiscall Hero9::Lethal(Hero9 *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined uVar8;
  undefined4 uVar9;
  CCNode **ppCVar10;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar11;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  ppCVar10 = *(CCNode ***)(DAT_000fd074 + 0xfcf38);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  this[0x118] = (Hero9)0x0;
  uVar9 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x80);
  iVar3 = __aeabi_fcmpeq(uVar9,0x3f800000);
  if (iVar3 == 0) {
    iVar3 = __aeabi_fcmpeq(uVar9,0);
    if (iVar3 == 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
      puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar9 = __addsf3(*puVar5,DAT_000fd088);
      uVar6 = __addsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x7c),DAT_000fd098);
      uVar6 = __addsf3(uVar6,DAT_000fd09c);
      uVar11 = __subsf3(uVar9,uVar6);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pcVar4 = (char *)(DAT_000fd0a0 + 0xfd026);
      pcVar7 = (char *)(DAT_000fd0a4 + 0xfd028);
      local_24 = local_1c;
      local_28 = local_20;
    }
    else {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,1);
      puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar9 = __addsf3(*puVar5,DAT_000fd088);
      uVar6 = __addsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x7c),DAT_000fd08c);
      uVar11 = __subsf3(uVar9,uVar6);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      pcVar4 = (char *)(DAT_000fd090 + 0xfcfda);
      pcVar7 = (char *)(DAT_000fd094 + 0xfcfdc);
    }
    uVar8 = 7;
    local_30 = local_28;
    local_2c = local_24;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
    pcVar4 = (char *)(DAT_000fd080 + 0xfcf88);
    pcVar7 = (char *)(DAT_000fd084 + 0xfcf8a);
    uVar8 = 8;
  }
  iVar2 = DAT_000fd0a8;
  vDrawScript_Unit(pcVar4,pcVar7,(char *)0x0,(CCNode *)this,local_30,local_2c,1,2,(bool)uVar8,true);
  vScript_Unit((char *)(iVar2 + 0xfd048),(char *)(DAT_000fd0ac + 0xfd052),(CCNode *)this,2,1);
  vScript_Unit((char *)(iVar2 + 0xfd048),(char *)(DAT_000fd0b0 + 0xfd060),(CCNode *)this,2,2);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


