/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d650  Symbol: ccpIntersectPoint */

/* cocos2d::ccpIntersectPoint(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&, cocos2d::CCPoint const&) */

cocos2d * __thiscall
cocos2d::ccpIntersectPoint
          (cocos2d *this,CCPoint *param_1,CCPoint *param_2,CCPoint *param_3,CCPoint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  CCPoint CVar3;
  float local_28;
  float fStack_24;
  undefined4 local_20 [3];
  
  iVar1 = ccpLineIntersect(param_1,param_2,param_3,param_4,&local_28,&fStack_24);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(DAT_0015d6d0 + 0x15d6c6);
    *(undefined4 *)this = *(undefined4 *)(DAT_0015d6d0 + 0x15d6c2);
  }
  else {
    CCPoint::CCPoint((CCPoint *)local_20);
    CVar3 = *param_1;
    uVar2 = __subsf3(*param_2,CVar3);
    uVar2 = __mulsf3(local_28,uVar2);
    local_20[0] = __addsf3(CVar3,uVar2);
    CVar3 = param_1[1];
    uVar2 = __subsf3(param_2[1],CVar3);
    uVar2 = __mulsf3(local_28,uVar2);
    uVar2 = __addsf3(CVar3,uVar2);
    *(undefined4 *)this = local_20[0];
  }
  *(undefined4 *)(this + 4) = uVar2;
  return this;
}


