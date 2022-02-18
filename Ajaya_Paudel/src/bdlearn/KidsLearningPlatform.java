package bdlearn;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class KidsLearningPlatform extends JFrame {

    private int x;
    private int y;
    private String text;
    private DrawingBase canvas;
    private JFrame frame;
    private JInternalFrame iframe;
    private Font titlefont = UIManager.getFont("Label.font");
    static JLabel l;

    private void displayGUI() {
        KidsLearningPlatform d = new KidsLearningPlatform();
        frame = new JFrame("BD Learn");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        canvas = new DrawingBase();
        canvas.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent me) {

                text = "X : " + me.getX() + " Y : " + me.getY();
                    x = me.getX();
                    y = me.getY();
                    canvas.setValues(text, x, y);
                
                //CONDITION::: ((me.getX() > X-COORDINATE && me.getX() < X+60) && (me.getY() > y-COORDINATE && me.getY() < Y+40))
                //aforapple
                if ((me.getX() > 100 && me.getX() < 160) && (me.getY() > 100 && me.getY() < 140)) {
                    aforapple afor = new aforapple();
                    frame.add(afor);
                    afor.setVisible(true);
                    afor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/apple.wav");
                } //bforball
                else if ((me.getX() > 200 && me.getX() < 260) && (me.getY() > 100 && me.getY() < 140)) {
                    bforball bfor = new bforball();
                    frame.add(bfor);
                    bfor.setVisible(true);
                    bfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/ball.wav");
                } //cforcat
                else if ((me.getX() > 300 && me.getX() < 360) && (me.getY() > 100 && me.getY() < 140)) {
                    cforcar cfor = new cforcar();
                    frame.add(cfor);
                    cfor.setVisible(true);
                    cfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/car.wav");
                } //dfordice
                else if ((me.getX() > 400 && me.getX() < 460) && (me.getY() > 100 && me.getY() < 140)) {
                    dfordice dfor = new dfordice();
                    frame.add(dfor);
                    dfor.setVisible(true);
                    dfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/dice.wav");
                } //eforegg
                else if ((me.getX() > 500 && me.getX() < 560) && (me.getY() > 100 && me.getY() < 140)) {
                    eforegg efor = new eforegg();
                    frame.add(efor);
                    efor.setVisible(true);
                    efor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/egg.wav");
                } //fforfan
                else if ((me.getX() > 100 && me.getX() < 160) && (me.getY() > 160 && me.getY() < 200)) {
                    fforfan ffor = new fforfan();
                    frame.add(ffor);
                    ffor.setVisible(true);
                    ffor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/fan.wav");
                } //gforgiraffe
                else if ((me.getX() > 200 && me.getX() < 260) && (me.getY() > 160 && me.getY() < 200)) {
                    gforgiraffe gfor = new gforgiraffe();
                    frame.add(gfor);
                    gfor.setVisible(true);
                    gfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/giraffe.wav");
                }//hforhen 
                else if ((me.getX() > 300 && me.getX() < 360) && (me.getY() > 160 && me.getY() < 200)) {
                    hforhen hfor = new hforhen();
                    frame.add(hfor);
                    hfor.setVisible(true);
                    hfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/hen.wav");
                }//iforicecream
                else if ((me.getX() > 400 && me.getX() < 460) && (me.getY() > 160 && me.getY() < 200)) {
                    iforicecream ifor = new iforicecream();
                    frame.add(ifor);
                    ifor.setVisible(true);
                    ifor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/icecream.wav");
                }//jforjoker
                else if ((me.getX() > 500 && me.getX() < 560) && (me.getY() > 160 && me.getY() < 200)) {
                    jforjoker jfor = new jforjoker();
                    frame.add(jfor);
                    jfor.setVisible(true);
                    jfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/joker.wav");
                } //mformouse
                else if ((me.getX() > 300 && me.getX() < 360) && (me.getY() > 220 && me.getY() < 260)) {
                    mformouse mfor = new mformouse();
                    frame.add(mfor);
                    mfor.setVisible(true);
                    mfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/mouse.wav");
                }//qforquill
                else if ((me.getX() > 200 && me.getX() < 260) && (me.getY() > 280 && me.getY() < 320)) {
                    qforquill qfor = new qforquill();
                    frame.add(qfor);
                    qfor.setVisible(true);
                    qfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/quill.wav");
                } //sforsun
                else if ((me.getX() > 400 && me.getX() < 460) && (me.getY() > 280 && me.getY() < 320)) {
                    sforsun sfor = new sforsun();
                    frame.add(sfor);
                    sfor.setVisible(true);
                    sfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/sun.wav");
                } //uforumbrella
                else if ((me.getX() > 100 && me.getX() < 160) && (me.getY() > 340 && me.getY() < 380)) {
                    uforumbrella ufor = new uforumbrella();
                    frame.add(ufor);
                    ufor.setVisible(true);
                    ufor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/umbrella.wav");
                }//yforyak
                else if ((me.getX() > 500 && me.getX() < 560) && (me.getY() > 340 && me.getY() < 380)) {
                    yforyak yfor = new yforyak();
                    frame.add(yfor);
                    yfor.setVisible(true);
                    yfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/yak.wav");
                }//zforzebra
                else if ((me.getX() > 300 && me.getX() < 360) && (me.getY() > 400 && me.getY() < 440)) {
                    zforzebra zfor = new zforzebra();
                    frame.add(zfor);
                    zfor.setVisible(true);
                    zfor.playMusic("/home/aphacker/NetBeansProjects/bdLearn/src/voice/zebra.wav");
                } 
//              else {
//                    text = "X : " + me.getX() + " Y : " + me.getY();
//                    x = me.getX();
//                    y = me.getY();
//                    canvas.setValues(text, x, y);
//                }
            }
        });

        frame.setLocationRelativeTo(null);
        frame.setContentPane(canvas);
        frame.pack();
        frame.setVisible(true);
    }

    public static void main(String... args) {
        SwingUtilities.invokeLater(new KidsLearningPlatform()::displayGUI);
    }

}

class DrawingBase extends JPanel {

    private String clickedAt = "";
    private int x = 0;
    private int y = 0;

    public void setValues(String text, int x, int y) {

        clickedAt = text;
        this.x = x;
        this.y = y;
        repaint();
    }

    public Dimension getPreferredSize() {
        return (new Dimension(657, 490));
    }

    public void paintComponent(Graphics g) {

        super.paintComponent(g);
        g.setFont(new java.awt.Font("Dialog", 2, 11));
        g.drawString(clickedAt, x, y);
        g.setFont(new java.awt.Font("Dialog", 1, 22));
        g.drawString("Kids Learning Platform", 190, 60);
        setForeground(Color.WHITE);
        setBackground(Color.BLACK);

        //paxi sabai ko lagi font
        g.setFont(new java.awt.Font("Dialog", 1, 20));

        //FIRST LINE  A-E
        g.drawRoundRect(100, 100, 60, 40, 10, 10);
        g.drawString("A", 122, 125);

        g.drawRoundRect(200, 100, 60, 40, 10, 10);
        g.drawString("B", 222, 125);

        g.drawRoundRect(300, 100, 60, 40, 10, 10);
        g.drawString("C", 322, 125);

        g.drawRoundRect(400, 100, 60, 40, 10, 10);
        g.drawString("D", 422, 125);

        g.drawRoundRect(500, 100, 60, 40, 10, 10);
        g.drawString("E", 522, 125);

        //SECOND LINE F-J
        g.drawRoundRect(100, 160, 60, 40, 10, 10);
        g.drawString("F", 122, 185);

        g.drawRoundRect(200, 160, 60, 40, 10, 10);
        g.drawString("G", 222, 185);

        g.drawRoundRect(300, 160, 60, 40, 10, 10);
        g.drawString("H", 322, 185);

        g.drawRoundRect(400, 160, 60, 40, 10, 10);
        g.drawString("I", 422, 185);

        g.drawRoundRect(500, 160, 60, 40, 10, 10);
        g.drawString("J", 522, 185);

        //third line K-O
        g.drawRoundRect(100, 220, 60, 40, 10, 10);
        g.drawString("K", 122, 245);

        g.drawRoundRect(200, 220, 60, 40, 10, 10);
        g.drawString("L", 222, 245);

        g.drawRoundRect(300, 220, 60, 40, 10, 10);
        g.drawString("M", 322, 245);

        g.drawRoundRect(400, 220, 60, 40, 10, 10);
        g.drawString("N", 422, 245);

        g.drawRoundRect(500, 220, 60, 40, 10, 10);
        g.drawString("O", 522, 245);

        //FOURTH line P-T
        g.drawRoundRect(100, 280, 60, 40, 10, 10);
        g.drawString("P", 122, 305);

        g.drawRoundRect(200, 280, 60, 40, 10, 10);
        g.drawString("Q", 222, 305);

        g.drawRoundRect(300, 280, 60, 40, 10, 10);
        g.drawString("R", 322, 305);

        g.drawRoundRect(400, 280, 60, 40, 10, 10);
        g.drawString("S", 422, 305);

        g.drawRoundRect(500, 280, 60, 40, 10, 10);
        g.drawString("T", 522, 305);

        //FIFTH LINE U-Y
        g.drawRoundRect(100, 340, 60, 40, 10, 10);
        g.drawString("U", 122, 365);

        g.drawRoundRect(200, 340, 60, 40, 10, 10);
        g.drawString("V", 222, 365);

        g.drawRoundRect(300, 340, 60, 40, 10, 10);
        g.drawString("W", 322, 365);

        g.drawRoundRect(400, 340, 60, 40, 10, 10);
        g.drawString("X", 422, 365);

        g.drawRoundRect(500, 340, 60, 40, 10, 10);
        g.drawString("Y", 522, 365);

        //LAST LINE Z
        g.drawRoundRect(300, 400, 60, 40, 10, 10);
        g.drawString("Z", 322, 425);
    }
}
