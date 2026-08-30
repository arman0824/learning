class Planet:
    def __init__(self, name, planet_type, star):
        if not all(isinstance(x, str) for x in (name, planet_type, star)):
            raise TypeError("name, planet type, and star must be strings")
        if len(name) == 0:
            raise ValueError("name, planet_type, and star must be non-empty strings")
        if len(planet_type) == 0:
            raise ValueError("name, planet_type, and star must be non-empty strings")
        if len(star) == 0:
            raise ValueError("name, planet_type, and star must be non-empty strings")
        self.name = name
        self.planet_type = planet_type
        self.star = star

    def orbit(self):
        return f"{self.name} is orbiting around {self.star}..."
    def __str__(self):
        return f"Planet: {self.name} | Type: {self.planet_type} | Star: {self.star}"

planet_1 = Planet("Venus", "Hot", "No")
planet_2 = Planet("Earth", "Normal", "Yes")
planet_3 = Planet("Mercury", "Hot", "No")
print(planet_1)
print(planet_2)
print(planet_3)
print(planet_1.orbit())
print(planet_2.orbit())
print(planet_3.orbit())