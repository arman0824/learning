full_dot = '●'
empty_dot = '○'
ten = 10

def create_character(character_name, strength, intelligence, charisma):
    if not isinstance(character_name, str):
        return 'The character name should be a string'
    if character_name == "":
        return 'The character should have a name'
    if len(character_name) > 10:
        return 'The character name is too long'
    if " " in character_name:
        return 'The character name should not contain spaces'
    if not (isinstance(strength, int) and isinstance(intelligence, int) and isinstance(charisma, int)):
        return 'All stats should be integers'
    if (strength < 1 or intelligence < 1 or charisma < 1):
        return 'All stats should be no less than 1'
    if (strength > 4 or intelligence > 4 or charisma > 4):
        return 'All stats should be no more than 4'
    if (strength + intelligence + charisma) != 7:
        return 'The character should start with 7 points'

    return (
            f'{character_name}\n'
            f'STR {full_dot * strength}{empty_dot * (ten - strength )}\n'
            f'INT {full_dot * intelligence}{empty_dot * (ten - intelligence )}\n'
            f'CHA {full_dot * charisma}{empty_dot * (ten - charisma )}\n'
            )

print(create_character('ren', 4, 2, 1))