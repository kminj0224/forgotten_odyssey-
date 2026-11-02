/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c77e4  Symbol: Draw_Special_Character */

/* Draw_Special_Character(cocos2d::CCLayer*, cocos2d::CCTexture2D*, char const*, cocos2d::CCPoint,
   int, int, float, float, bool) */

CCLayer * Draw_Special_Character
                    (CCLayer *param_1,CCTexture2D *param_2,char *param_3,CCPoint param_4,int param_5
                    ,int param_6,float param_7,float param_8,bool param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CCPoint *pCVar4;
  int iVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  undefined3 in_stack_00000009;
  undefined4 in_stack_0000000c;
  char in_stack_00000014;
  code *local_60;
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCRect aCStack_40 [4];
  CCRect aCStack_30 [5];
  
  if (param_3 == (char *)0x0) {
    uVar6 = __mulsf3(in_stack_0000000c,DAT_000c78f4);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2_00,
               extraout_s3_00);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(param_2,aCStack_30);
  }
  else {
    uVar6 = __mulsf3(in_stack_0000000c,DAT_000c78f4);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_40,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,
               extraout_s3);
    piVar1 = (int *)cocos2d::CCSprite::spriteWithFile(param_3,aCStack_40);
  }
  iVar5 = *piVar1;
  if (in_stack_00000014 == '\0') {
    local_60 = *(code **)(iVar5 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(iVar5 + 0x7c))();
    uVar3 = __addsf3(param_4,*puVar2);
    __mulsf3(uVar3,0x3f000000);
    iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar3 = __addsf3(param_5,*(undefined4 *)(iVar5 + 4));
    uVar6 = __mulsf3(uVar3,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    pCVar4 = aCStack_48;
  }
  else {
    local_60 = *(code **)(iVar5 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(iVar5 + 0x7c))();
    uVar3 = __addsf3(param_4,*puVar2);
    __mulsf3(uVar3,0x3f000000);
    iVar5 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar3 = __subsf3(*(undefined4 *)(iVar5 + 4),param_5);
    uVar6 = __mulsf3(uVar3,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    pCVar4 = aCStack_50;
  }
  (*local_60)(piVar1,pCVar4);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_6,_param_9);
  return param_1;
}


