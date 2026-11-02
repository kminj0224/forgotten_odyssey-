/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150320  Symbol: boundaryTexCoord */

/* cocos2d::CCProgressTimer::boundaryTexCoord(char) */

undefined8 cocos2d::CCProgressTimer::boundaryTexCoord(char param_1)

{
  undefined4 *this;
  int in_r1;
  uint in_r2;
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  this = (undefined4 *)(int)param_1;
  if (in_r2 < 4) {
    if (*(int *)(in_r1 + 0xfc) == 0) {
      __floatsisf(0x1e >> (in_r2 * -2 + 7 & 0xff) & 1);
      uVar2 = ~(in_r2 * 2) + 7;
    }
    else {
      if (*(int *)(in_r1 + 0xfc) != 1) goto LAB_00150382;
      uVar2 = in_r2 * 2;
      __floatsisf(0x1e >> (uVar2 + 1 & 0xff) & 1);
    }
    uVar3 = __floatsisf(0x1e >> (uVar2 & 0xff) & 1);
    CCPoint::CCPoint((CCPoint *)this,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  }
  else {
LAB_00150382:
    uVar1 = *(undefined4 *)(DAT_00150394 + 0x15038c);
    *this = *(undefined4 *)(DAT_00150394 + 0x150388);
    this[1] = uVar1;
  }
  return CONCAT44(this,this);
}


