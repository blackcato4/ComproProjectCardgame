////function card attack การ์ดโจมตี 1,2,3,4


void apply(Card c, Player& me, Player& en) {

    switch (c.type) {

        // 1/ ตีเบา: ดาเมจ 10% ของ MaxHP ศัตรู

        case CardType::LightAttack:

            en.takeDamage(en.maxHp * 0.10f);

            break;

        // 2/ ตีแรง: ดาเมจ 20% ของ MaxHP ศัตรู

        case CardType::HeavyAttack:

            en.takeDamage(en.maxHp * 0.20f);

            break;

        // 3/ ดูดเลือด: ดาเมจ 15% และ ฮีลตัวเอง 10%

        case CardType::LifeSteal:

            en.takeDamage(en.maxHp * 0.15f);

            me.heal(me.maxHp * 0.10f);

            break;

        // 4/ ตีทะลุเกราะ: ดาเมจ 15% ไม่สนค่าเกราะ (ส่งค่า ignoreGuard = true)

        case CardType::Pierce:

            en.takeDamage(en.maxHp * 0.15f, true);

            break;

    }

}