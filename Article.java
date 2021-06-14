public class Article {

	private static int objectsCounter = 0;
	
	private String svitru_koda_numurs;
	private String nosaukums;
	private float cena_par_gabalu;
	
	public static final int getObjectsCount() {
		return objectsCounter;
	}
	
	public Article(String svitru_koda_numurs, String nosaukums, float cena_par_gabalu) {
		this.svitru_koda_numurs = svitru_koda_numurs;
		this.nosaukums = nosaukums;
		this.cena_par_gabalu = cena_par_gabalu;
		objectsCounter++;
	}
	public Article() {
		this("_", "_", 0f);
	}
	
	public Article(Article at) {
		this(at.svitru_koda_numurs, at.nosaukums, at.cena_par_gabalu);
	}
	
	@Override
	public String toString() {
		return "\n\tSvitru_koda_numurs: " + svitru_koda_numurs +
			   "\n\tNosaukums: " + nosaukums +
			   "\n\tCena_par_gabalu: " + cena_par_gabalu + 
			   "\n";
	}
	
	final public String getSvitru_koda_numurs() {
		return svitru_koda_numurs;
	}

	final public void setSvitru_koda_numurs(String svitru_koda_numurs) {
		this.svitru_koda_numurs = svitru_koda_numurs;
	}

	final public String getNosaukums() {
		return nosaukums;
	}

	final public void setNosaukums(String nosaukums) {
		this.nosaukums = nosaukums;
	}

	final public float getCena_par_gabalu() {
		return cena_par_gabalu;
	}

	final public void setCena_par_gabalu(float cena_par_gabalu) {
		this.cena_par_gabalu = cena_par_gabalu;
	}

	public static void main(String[] args) {
		
		Article a1 = new Article("2929939192", "Paparde", 13.99f);
		Article a2 = new Article(a1);
		Article a3 = new Article();
		
		a2.setNosaukums("Paparde_2");
		
		System.out.println(a1.toString());
		System.out.println(a2.toString());
		System.out.println(a3);

		float testCena = a1.getCena_par_gabalu();
		
		System.out.println("a1.getCena_par_gabalu = " + testCena);
		
		System.out.println("Izveidoto objektu skaits/getObjectsCount() = " + Article.getObjectsCount());
	}

}
