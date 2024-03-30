
class Balloon:
    def _init_(self ,speed):
    self.a=random.randint(30,40)
    self.b=self.a+random.randint(0,10)
    self.x=random.rabdrange(margin,width-self.a-margin)
    self.y=height- lowerbound
    self.angle=90
    self.speed= -speed
    self.probPool=[-1,-1,-1,0,0,0,0,1,1,1]
    self.length=random.randint(50,100)
    self.color=random.choice([red,geen,purple,orange,yellow,blue])
    def mov(self):
        direct=random.choice(self.probPool)
        if direct= -1:
            self.angle+= -10
            elif direct== 0:
                self.angle+=0
                else:
                    self.angle+=10
                    self.y +=self.speed*sin(radians(self.angle))
                    self.x +=self.speed*cos(radians(self.angle))
                    if(self.x +self.a > width) or(self.x<0):
                        if self.y>height/5:
                            self.x-=self.speed*cos(radians(self.angle))
                            else:
                                self.reset()
                                if self.y +self.b < 0 or self.y  > height + 30:
                                    self.reset()
                                    def show(self):
                                        pygame.draw.line(display,darkblue,(self.x+self.a/2,self.y+self.b).(self.x+self.a/2,self.y+self.b+self.length))
                                        pygame.draw.ellipse(display,self.color,(self.x,self.y,self.a,self.b))
                                         pygame.draw.ellipse(display,self.color,(self.x,self.a/2-5,self.y+self.b -3,10,10))
